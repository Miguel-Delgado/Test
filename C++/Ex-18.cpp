#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    system("chcp 1251 > null");
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    int masiv1[10], masiv2[10], i = 0;
    cout << "Массив до сортировки: \n| ";
    for (int &n: masiv1){
        n = rand() % 100 + 1;
        cout << masiv1[i] << " | ";
        i++;
    }
    cout << "\nМассив после сортировки: \n| ";
    for (int j = 0; j < 10; j++){
        masiv2[j] = masiv1[9 - j];
        cout << masiv2[j] << " | ";
    }
    return 0;
}