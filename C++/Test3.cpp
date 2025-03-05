#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int a = 10;        // ������� ����������
    int* ptr = &a;     // ��������� ptr ������ ����� ���������� a

    cout << "�������� a: " << a << endl;          // �����: 10
    cout << "����� a: " << &a << endl;           // �����: ����� � ������ (��������, 0x7ffee4c0a4ac)
    cout << "�������� ptr: " << ptr << endl;     // �����: ��� �� �����
    cout << "�������� �� ������ ptr: " << *ptr << endl; // �����: 10

    *ptr = 20;         // �������� �������� �� ������
    cout << "����� �������� a: " << a << endl;   // �����: 20

    return 0;
}