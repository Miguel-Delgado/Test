#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    system("chcp 1251 > null");
    setlocale(LC_ALL, "rus");
    int A, B;
    cout << "������� �������� A: ";
    cin >> A;
    cout << "������� �������� B: ";
    cin >> B;
    if (A != 0){
        if (B % A == 0){
            cout << "x = " << B / A;
        }
        else {
            cout << "��������� ��������� ����������� � �������� ";
        }
    }
    else {
        if (B != 0){
            cout << "������ �� 0 ������ ";
        }
        else {
            cout << "��������� ����� ����������� ��������� ������� ";
        }
    }
    return 0;
}
