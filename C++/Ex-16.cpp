#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    system("chcp 1251 > nul");
    setlocale(LC_ALL, "Rus");
    int IF_FIB;
    cout << "������� ����� �� 1 �� 10: ";
    cin >> IF_FIB;
    if (IF_FIB < 1){
        cout << "�� ����� ����� �� ��������� �� 1 �� 10 ";
    }
    else {
        switch (IF_FIB){
            case 1:
                cout << "����� ���������� � ������ ����� ���������";
                break;
            case 2:
                cout << "����� ���������� � ������ ����� ���������";
                break;
            case 3:
                cout << "����� ���������� � ������ ����� ���������";
                break;
            case 5:
                cout << "����� ���������� � ������ ����� ���������";
                break;
            case 8:
                cout << "����� ���������� � ������ ����� ���������";
                break;
            default:
                cout << "����� �� ���������� � ������ ����� ���������";
                break;
        }
    }
    return 0;
}