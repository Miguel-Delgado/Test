#include <iostream>
#include <cstdlib>

using namespace std;

int SUMM(int a){
    int sum = 0;
    for (int i = 1; i <= a; i++){
        for (int j = 1; j <= a; j++){
            if (a % i == 0 and a % j == 0){
                sum += (i + j);
            }
        }
    }
    return sum;
}

int main(){
    system("chcp 1251 > null");
    setlocale(LC_ALL, "Rus");
    int a;
    cout << "������� �������� a: ";
    cin >> a;
    cout << "����� ��������� ��������� " << a << " �����: " << SUMM(a);
    return 0;
}