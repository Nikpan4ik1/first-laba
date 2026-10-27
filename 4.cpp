#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");

    double ves, rost, imt;

    cout << "Введите вес (кг): ";
    cin >> ves;

    if (cin.fail()){
        cout << "Ошибка. Введите ЧИСЛО.";
        return 1;
    }

    cout << "Введите рост (м): ";
    cin >> rost;

    if (cin.fail()){
        cout << "Ошибка. Введите ЧИСЛО.";
        return 1;
    }

    if (rost <= 0){
        cout << "Ошибка. Рост должен быть больше нуля.";
        return 1;
    }

    if (ves <= 0){
        cout << "Ошибка. Вес должен быть больше нуля.";
        return 1;
    }

    imt = ves / (rost * rost);

    cout <<"ИМТ равен:" << fixed << setprecision(1) << imt;
    
    return 0;
}