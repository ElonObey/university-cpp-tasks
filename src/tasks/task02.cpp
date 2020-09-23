//
// Task #02
//
// Написать программу, которая сравнивает два введенных с
// клавиатуры числа. Программа должна указать, какое число
// больше, или, если числа равны, вывести соответствующее
// сообщение.
//

#include <iostream>

using namespace std;

int biggest(double first_number, double second_number) {
    if (first_number < second_number) {
        return second_number;
    } else {
        return first_number;
    }
}

int main() {
    double first_number = 0;
    double second_number = 0;

    cout << "Введите первое число: ";
    cin >> first_number;
    cout << "Введите второе число: ";
    cin >> second_number;

    if (first_number == second_number) {
        cout << "Числа равны" << endl;
    } else {
        cout << "Большее число: "
             << biggest(first_number, second_number)
             << endl;
    }

    return 0;
}
