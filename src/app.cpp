#include <iostream>
#include <string>
#include "avatar.h"
#include "tasks/task01.h"

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
            cout << " # * Задача #03" << endl;
            Task01 *task = new Task01();
            task->run(3);
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
         << "написать программу, которая проверяет, делится ли на три введенное с клавиатуры целое число." << endl;

    printMinHelp();
}
