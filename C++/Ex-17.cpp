#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    system("chcp 1251 > null");
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    cout << "������ �� ����������: \n" << "| ";
    int massiv[10], i = 0, s = 0;
    for (int &n: massiv){
        n = rand() % 10 + 1;
        cout << massiv[i] << " | ";
        i++;
    }
    cout << "\n������ ����� ����������: \n" << "| ";
    for (int i = 1; i <= 10; i++){ // ������ ��� <= � �� <(����� ������ � GPT)
        for (int j = 0; j < 10 - i; j++){
            if (massiv[j] < massiv[j + 1]){
                s = massiv[j + 1];
                massiv[j + 1] = massiv[j];
                massiv[j] = s;
            }
        }
    }
    for (int k = 0; k < 10; k++){
        cout << massiv[k] << " | ";
    }
    return 0;
}