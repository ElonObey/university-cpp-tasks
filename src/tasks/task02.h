/**
 * Сравнивает два введенных с клавиатуры числа. Указывает,
 * какое число больше, или, если числа равны, выводит
 * соответствующее сообщение.
 */
#include <iostream>
#include <string>

using namespace std;

namespace tasks {
    class Task02;
}

class tasks::Task02 {
    private:
        const string HELP_MESSAGE = "Сравнивает два введенных с \
            клавиатуры числа. Указывает, какое число больше, или, \
            если числа равны, выводит соответствующее сообщение.";

        int biggest(double first_number, double second_number) {
            if (first_number < second_number) {
                return second_number;
            } else {
                return first_number;
            }
        }

    public:
        int run() {
            double first_number = 0;
            double second_number = 0;

            cout << " # * Введите первое число: " << "\n # > ";
            cin >> first_number;
            cout << " # * Введите второе число: " << "\n # > ";
            cin >> second_number;

            if (first_number == second_number) {
                cout << " # Числа равны" << endl;
            } else {
                cout << " # Большее число: "
                     << biggest(first_number, second_number)
                     << endl;
            }

            return 0;
        }
};


