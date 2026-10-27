#include <iostream>
#include <string>
using namespace std;
//121321

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double chislo, n;

    cout << "Введите число, которое хотите возвести в степень: ";
    cin >> chislo;
    if (cin.fail()) {
        cout << "Ошибка. Введите число." << endl;
        return 1;
    }
    cout << "Введите степень: ";
    cin >> n;
    if (cin.fail()) {
        cout << "Ошибка. Степень должна быть целым числом." << endl;
        return 1;
    }

    bool minus = false;
    double result = 1;

    if (n<0) {
        minus = true;
        n *= -1;
    }

    for (int i = 0; i < n; i++) {
        result *= chislo;
    }

    if (minus==true) {
        result = 1/result;
    }

    cout << "Результат возведения в " << n << " степень: " << result << endl;

    return 0;
}
