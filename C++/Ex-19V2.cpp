#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    system("chcp 1251 > null");
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    int massiv1[10];
    int count_chet = 0, count_nechet = 0;

    for (int i = 0; i < 10; i++){
        int n = rand() % 20 + 1;
        massiv1[i] = n;
        if (n % 2 == 0){
            count_chet++;
        }
        else {
            count_nechet++;
        }
        cout << massiv1[i] << " ";
    }
    cout << endl;

    int massiv2[count_chet], massiv3[count_nechet];
    int count_ms_ch = 0, count_ms_nech = 0;

    for (int i = 0; i < 10; i++){
        if (massiv1[i] % 2 == 1){
            massiv3[count_ms_nech++] = massiv1[i];
        }
        else {
            massiv2[count_ms_ch++] = massiv1[i];
        }
    }
    for (int i = 1; i < count_ms_ch; i++) {
        for (int j = 0; j < count_ms_ch - i; j++) {
            if (massiv2[j] > massiv2[j + 1]) {
                int s = massiv2[j];
                massiv2[j] = massiv2[j + 1];
                massiv2[j + 1] = s;
            }
        }
    }
    for (int i = 1; i < count_ms_nech; i++) {
        for (int j = 0; j < count_ms_nech - i; j++) {
            if (massiv3[j] > massiv3[j + 1]) {
                int k = massiv3[j];
                massiv3[j] = massiv3[j + 1];
                massiv3[j + 1] = k;
            }
        }
    }

    for (int i = 0; i < count_ms_nech; i++){
        massiv1[i] = massiv3[i];
    }

    for (int i = 0; i < count_ms_ch; i++){
        massiv1[i + count_ms_nech] = massiv2[i];
    }

    cout << "Массив чисел после сортировки: \n| ";
    for (int i = 0; i < 10; i++) {
        cout << massiv1[i] << " | ";
    }

    return 0;
}