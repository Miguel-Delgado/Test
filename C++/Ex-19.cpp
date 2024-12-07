#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    system("chcp 1251 > null");
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    int mas1[10], mas2[5], mas3[5];
    cout << "| ";
    for (int i = 0; i < 10; i++){
        mas1[i] = i;
        cout << mas1[i] << " | ";
    }
    int count1 = 0, count2 = 0;
    for (int i = 0; i < 10; i++){
        if (i % 2 == 1){
            mas3[count2] = i;
            count2++;
        } 
        else {
            mas2[count1] = i;
            count1++;
        }
    }
    for (int i = 0; i < 5; i++){
        mas1[i] = mas3[i];
        mas1[i + 5] = mas2[i];
    }
    cout << "\n| ";
    for (int i = 0; i < 10; i++){
        cout << mas1[i] << " | ";
    }
    return 0;
}

