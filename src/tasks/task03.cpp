//
// Task #03
//
// Написать программу вычисления стоимости разговора по
// телефону с учетом 20% скидки, представляемой по
// субботам и воскресеньям. Исходными данными для
// программы являются номер дня недели и длительность
// разговора.
//

#include <iostream>

using namespace std;

bool inWeek(int day) {
    if (0 < day && day < 8) {
        return true;
    } else {
        return false;
    }
}

bool isDayOff(int day) {
    if (day == 6 || day == 7) {
        return true;
    } else {
        return false;
    }
}

double calculatePrice(double minutes, bool isDiscountDay,
                      double price_per_minute, double discount) {
    double price = minutes * price_per_minute;

    if (isDiscountDay) {
        price -= price * discount;
    }

    return price;
}

int main() {
    const double kPricePerMinute = 1;
    const double kDiscount = 0.20;

    // Day of week
    int day = 0;
    // Minutes of conversation
    double minutes = 0;

    cout << "Введите день недели: ";
    cin >> day;
    cout << "Введите количество минут разговора: ";
    cin >> minutes;

    if (inWeek(day)) {
        cout << "Стоимость разговора: "
             << calculatePrice(minutes, isDayOff(day), kPricePerMinute, kDiscount)
             << endl;
    } else {
        cout << "Ошибка: неверный день недели" << endl;
    }

    return 0;
}
