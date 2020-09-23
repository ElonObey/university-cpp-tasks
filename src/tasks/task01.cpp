//
// Task #01
//
// Написать программу, которая проверяет,
// делится ли на три введенное с клавиатуры
// целое число.
//

#include <iostream>

using namespace std;

bool isMultipleOf(int divident, int divisor) {
    return divident % divisor == 0;
}

int main() {
    int input_number = 0;

    cout << "Введите число: ";
    cin >> input_number;

    if (isMultipleOf(input_number, 3)) {
        cout << "Число "
             << input_number
             << " делится на три."
             << endl;
    } else {
        cout << "Число "
             << input_number
             << " не делится на три."
             << endl;
    }

    return 0;
}
