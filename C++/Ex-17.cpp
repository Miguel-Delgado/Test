#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    system("chcp 1251 > null");
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    cout << "Массив до сортировки: \n" << "| ";
    int massiv[20], i = 0, s = 0;
    for (int &n: massiv){
        n = rand() % 20 + 1;
        cout << massiv[i] << " | ";
        i++;
    }
    cout << "\nМассив после сортировки: \n" << "| ";
    for (int i = 1; i < 20; i++){
        for (int j = 0; j < 20 - i; j++){
            if (massiv[j] < massiv[j + 1]){
                s = massiv[j + 1];
                massiv[j + 1] = massiv[j];
                massiv[j] = s;
            }
        }
    }
    for (int k = 0; k < 20; k++){
        cout << massiv[k] << " | ";
    }
    return 0;
}