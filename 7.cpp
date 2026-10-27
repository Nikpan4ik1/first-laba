#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int day, month, year;
    int b_day, b_month, b_year;
    int r_day, r_month, r_year;
    char dot1, dot2;
    char b_dot1, b_dot2;

    cout << "Введите дату рождения (ДД.ММ.ГГ): ";
    cin >> b_day >> b_dot1 >>  b_month >> b_dot2 >> b_year;

    if (cin.fail() or b_dot1 != '.' or b_dot2 != '.' ) {
        cout << "Ошибка. Введите ЧИСЛА." << endl;
        return 1;
    }

    cout << "Введите текущую дату (ДД.ММ.ГГ): ";
    cin >> day>> dot1 >> month >> dot2 >> year;

    if (cin.fail() or dot1 != '.' or dot2 != '.') {
        cout << "Ошибка. Введите ЧИСЛА." << endl;
        return 1;
    }

    if (b_day < 1 or b_day > 31 or b_month < 1 or b_month > 12 or b_year < 0) {
        cout << "Ошибка.  Некорректная текущая дата. " << endl;
        return 1;
    }

    if (day < 1 or day > 31 or month < 1 or month > 12 or year < 0) {
        cout << "Ошибка. Некорректная текущая дата. " << endl;
        return 1;
    }

    if (year < b_year or (year == b_year and month < b_month) or (year == b_year and month == b_month and day < b_day)) {
        cout << "Ошибка. Текущая дата не может быть раньше даты рождения." << endl;
        return 1;
    }

    r_day = day - b_day;
    r_month = month - b_month;
    r_year = year - b_year;

    if (r_day < 0) {
        r_day += 30;
        r_month -= 1;
    }

    if (r_month < 0) {
        r_month += 12;
        r_year -= 1;
    }

    cout << "Ваш возраст: " << r_year << " лет, " << r_month << " месяцев, " << r_day << " дней." << endl;

    return 0;
}