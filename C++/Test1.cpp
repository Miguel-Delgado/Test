#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    system("chcp 1251 > null");
    setlocale(LC_ALL, "Rus");
    srand(time(NULL)); // ��������� ����� � �������

    int massiv[10];
    for (int &n : massiv) { // ������� ��������� �������
        n = rand() % 10 + 1; // ��������� ���������� ����� �� 1 �� 10
        cout << n << " "; // ������� �������� ��������
    }
    return 0;
}