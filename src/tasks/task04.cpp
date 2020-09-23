//
// Task #04
//
// Напишите программу, которая запрашивает у пользователя номер дня недели,
// затем выводит название дня недели или сообщение об ошибке, если введены
// неверные данные.
//

#include <iostream>
#include <string>

using namespace std;

enum DaysOfWeek {
    kMonday = 1,
    kTuesday,
    kWednesday,
    kThursday,
    kFriday,
    kSaturday,
    kSunday,
};

bool isDayOfWeek(int day) {
    if (0 < day && day < 8) {
        return true;
    } else {
        return false;
    }
}

string getDayOfWeek(int number_day) {
    string day = "";

    if (number_day == kMonday) {
        day = "понедельник";
    } else if (number_day == kTuesday) {
        day = "вторник";
    } else if (number_day == kWednesday) {
        day = "среда";
    } else if (number_day == kThursday) {
        day = "четверг";
    } else if (number_day == kFriday) {
        day = "пятница";
    } else if (number_day == kSaturday) {
        day = "суббота";
    } else if (number_day == kSunday) {
        day = "воскресенье";
    }

    return day;
}

int main() {
    int day = 0;

    cout << "Введите день недели (1-7): ";
    cin >> day;

    if (isDayOfWeek(day)) {
        cout << "День недели: " << getDayOfWeek(day) << endl;
    } else {
        cout << "Ошибка: неверный день недели" << endl;
    }

    return 0;
}
