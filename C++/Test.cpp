#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    system("chcp 1251 > null");
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    char symb;
    int num;
    char* p = &symb;
    int* q = &num;
    *p = 'A';
    *q = 100;
    cout << "symb = " << symb << endl;
    cout << "num = " << num << endl;            
    return 0;
}