#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int n;

    cout << "Введите n - правую границу диапазона: ";
    cin >> n;
    
    if (cin.fail()) {
        cout << "Ошибка. Введите числою. Оно должно быть целым." << endl;
        return 1;
    }

    if (n<0) {
        cout << "Ошибка. n должно быть положительным." << endl;
        return 1;
    }

    int a = 0, b = 0;
    if (n < 5) {
        cout << "Сумма чисел, кратных 5: 0" << endl;
        return 0;
    }
    
    while (a <= n) {
        if (a % 5 == 0) {
            b += a;
        }
        a+=1;
    }

    cout << "Сумма чисел, кратных 5: " << b << endl;

    return 0;
}