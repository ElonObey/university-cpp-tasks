#include <iostream>
#include <string>
#include "avatar.h"
#include "tasks/task01.h"
#include "tasks/task02.h"

using namespace std;
using namespace tasks;

void printMinHelp();

void printHelp();

int main() {
    string command = "quit";

    printAvatar();
    printMinHelp();

    while (true) {
        cout << endl << " * Введите команду:" << "\n > ";
        cin >> command;
        cout << endl;

        if (command == "help" || command == "h") {
            printHelp();
        } else if (command == "quit" || command == "q") {
            cout << " > До встречи" << endl;
            break;
        } else if (command == "m1" || command == "module01") {
            cout << " # * Задача #01" << endl;
            Task01 *task = new Task01();
            task->run(3);
            delete task;
        } else if (command == "m2" || command == "module02") {
            cout << " # * Задача #02" << endl;
            Task02 *task = new Task02();
            task->run();
            delete task;
        }
    }

    return 0;
}

void printMinHelp() {
    cout << " ? 'help', 'h' - вывести информационное сообщение" << endl
         << " ? 'quit', 'q' - выход из программы" << endl;
}

void printHelp() {
    cout << " ? 'm1', 'module01' - задача #01: "
         << "проверяет, делится ли на n введенное с клавиатуры целое число." << endl
         << " ? 'm1', 'module01' - задача #01: "
         << "Сравнивает два введенных с клавиатуры числа. Указывает, какое число больше, или, если числа равны, выводит соответствующее сообщение." << endl;

    printMinHelp();
}
