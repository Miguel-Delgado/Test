#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    system("chcp 1251 > nul");
    setlocale(LC_ALL, "Rus");
    int IF_FIB;
    cout << "Введите число от 1 от 10: ";
    cin >> IF_FIB;
    if (IF_FIB < 1){
        cout << "Вы ввели число не диапозоне от 1 до 10 ";
    }
    else {
        switch (IF_FIB){
            case 1:
                cout << "Число находиться в списке чисел Фибаначчи";
                break;
            case 2:
                cout << "Число находиться в списке чисел Фибаначчи";
                break;
            case 3:
                cout << "Число находиться в списке чисел Фибаначчи";
                break;
            case 5:
                cout << "Число находиться в списке чисел Фибаначчи";
                break;
            case 8:
                cout << "Число находиться в списке чисел Фибаначчи";
                break;
            default:
                cout << "Число не находиться в списке чисел Фибаначчи";
                break;
        }
    }
    return 0;
}