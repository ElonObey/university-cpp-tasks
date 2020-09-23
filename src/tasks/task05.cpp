//
// Task #05
//
// Написать программу, которая вычисляет сумму первых n членов
// ряда: 1, 3, 5, 7... Количество суммируемых членов ряда
// задается во время работы программы.
//

#include <iostream>

using namespace std;

int main() {
    int limit = 0;
    int *sequence;

    cout << "Введите лимит ряда: ";
    cin >> limit;

    sequence = new int[limit];

    for (int i = 0; i < limit; i++) {
        sequence[i] = 1 + 2 * i;
    }

    cout << "Последовательность:";
    for (int i = 0; i < limit; i++) {
        cout << " " << sequence[i];
    }

    cout << endl;

    delete[] sequence;
    sequence = nullptr;

    return 0;
}
