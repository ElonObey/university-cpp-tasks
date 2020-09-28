/**
 * Проверяет, делится ли на n введенное с клавиатуры целое число.
 */
#include <iostream>
#include <string>

using namespace std;

namespace tasks {
    class Task01;
}

class tasks::Task01 {
    private:
        const string HELP_MESSAGE = "написать программу, которая \
            проверяет, делится ли на три введенное с клавиатуры целое число";

        bool isMultipleOf(int divident, int divisor) {
            return divident % divisor == 0;
        }

    public:
        int run(int divisor) {
            int input_number = 0;

            cout << " # * Введите число: " << "\n # > ";
            cin >> input_number;

            if (isMultipleOf(input_number, divisor)) {
                cout << " # * Число "
                     << input_number
                     << " делится на три."
                     << endl;
            } else {
                cout << " # * Число "
                     << input_number
                     << " не делится на три."
                     << endl;
            }

            return 0;
        }
};
