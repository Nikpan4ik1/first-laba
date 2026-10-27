#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    string text,result;
    int k,k1,m;

    cout << "Введите произвольный текст: ";
    getline(cin, text);

    cout<< "Введите диапозон, сначал Введите начало диапозона(k): ";
    cin >> k;

    if (cin.fail()){
        cout << "Ошибка. Введите число, положителное.";
        return 1;
    }
    cout << "Введите конец диапозона (m): ";
    cin >> m;

    if (cin.fail()){
        cout << "Ошибка. Введите число, положителное.";
        return 1;
    }

    if (m < 1 or m > (int)text.length()){
        cout << "Ошибка. Диапозон m вне текста. Исправьте данные перезапустив программу. ";
        return 1;
    }

    if (k < 1 or k > (int)text.length()){
        cout << "Ошибка. Диапозон k вне текста. Исправьте данные перезапустив программу. ";
        return 1;
    }

    if (k>m){
        cout << "Ошибка. Диапозон K(начало) больше чем M(конец). Исправьте данные перезапустив программу. ";
        return 1;
    }
    
    k = k1;

    while (k<=m){
        result+=text[k];
        k+=1;
    }

    cout<< "Вывод а) буква под диапозоном K: "<< text[k1]<< endl;
    cout<<"Вывод б) диапозон от k до m: "<< result<<endl;

    return 0;
}