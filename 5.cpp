#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int cc, chislo;
    string result;

    cout << "Введите число, которое хотите перевести в другую систему счисления : ";
    cin >> chislo;
    
    if (cin.fail()){
        cout << "Ошибка. Введите ЧИСЛО.";
        return 1;
    }

    cout << "Введите систему счисления: ";
    cin >> cc;

    if (cin.fail()){
        cout << "Ошибка. Введите ЧИСЛО.";
        return 1;
    }

    if (cc < 2 or cc > 36){
        cout << "Ошибка. Система счисления должна быть от 2 до 36.";
        return 1;
    }

    bool minus = false;
    if (chislo < 0){
        minus = true;
        chislo *= -1;
    }

    string m = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (chislo > 0){
        result = m[chislo % cc] + result;
        chislo /= cc;
    }

    if (minus == true){
        result = "-" + result;
    }

    cout << "Результат перевода числа в" << cc <<"систему счисления: " << result << endl;
    return 0;
}