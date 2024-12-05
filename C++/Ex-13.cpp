#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    system("chcp 1251 > null");
    setlocale(LC_ALL, "Rus");
    int a = 100, b = 100, c = 100;
    for (int i = 1; i <= a; i++){
        for (int j = 1; j <= b; j++){
            for (int k = 1; k <= c; k++){
                if (i * i + j * j == k * k){
                    cout << i << " + " << j << " = " << k << " "  << endl;
                }
            }
        }
    }
    return 0;
}