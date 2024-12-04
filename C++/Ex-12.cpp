#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    system("chcp 1251 > null");
    setlocale(LC_ALL, "rus");
    int A, B;
    cout << "Введите значение A: ";
    cin >> A;
    cout << "Введите значение B: ";
    cin >> B;
    if (A != 0){
        if (B % A == 0){
            cout << "x = " << B / A;
        }
        else {
            cout << "Результат выражения получаеться с остатком ";
        }
    }
    else {
        if (B != 0){
            cout << "Делить на 0 нельзя ";
        }
        else {
            cout << "Выражение имеет бесконечное множество решений ";
        }
    }
    return 0;
}
