
//
// Task #05
//
// Написать программу, которая вычисляет минимальное число вводимой с
// клавиатуры последовательности дробных чисел. Количество чисел
// должно задаваться во время работы программы.
//

#include <iostream>

using namespace std;

double min(double numbers[], int size);

int main() {
    int limit = 0;
    double *numbers;

    cout << "Введите лимит ряда: ";
    cin >> limit;

    if (limit < 1) {
        cerr << "Ошибка: неверный лимит ряда!" << endl;
        return 1;
    }

    numbers = new double[limit];

    cout << "Ввод чисел ряда (" << limit << ")"
         << endl << endl;
    for (int i = 0; i < limit; i++) {
        cout << "Элемент номер " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "Минимальное число ряда: " << min(numbers, limit) << endl;

    delete[] numbers;
    numbers = nullptr;

    return 0;
}

double min(double numbers[], int size) {
    double min = numbers[0];

    for (int i = 1; i < size; i++) { if (numbers[i] < min) { min = numbers[i];
        }
    }

    return min;
}
