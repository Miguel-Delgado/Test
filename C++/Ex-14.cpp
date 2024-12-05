#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

double DIS(int a, int b, int c){
    return b * b - 4 * a * c;
}

int main(){
    system("chcp 1251 > null");
    setlocale(LC_ALL, "rus");
    int a, b, c, x1, x2, x;
    cin >> a >> b >> c;
    cout << "Выражение будет вгылядеть так: \n" << a << "x^2" << " + " << b << "x" << " + " << c << " = 0" << endl;
    if (DIS(a, b, c) == 0){
        x = -b / (2 * a);
        cout << "Результат выражения будет равен x = " << x << endl;
    }
    else if (DIS(a, b, c) > 0){
        x1 = (-b + sqrt(DIS(a, b, c)) / (2 * a));
        x2 = (-b - sqrt(DIS(a, b, c)) / (2 * a));
        cout << "Результаом выражения будет x1 = " << x1 << endl;
        cout << "Результаом выражения будет x2 = " << x2;
    }
    else {
        cout << "Решения данного выражения не существует";
    }
    return 0;
}