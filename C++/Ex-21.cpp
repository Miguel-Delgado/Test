#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    system("chcp 1251 > null");
    setlocale(LC_ALL, "rus");
    char symb;
    int num;
    char* p;
    int* q;
    p = &symb;
    q = &num;
    *p = 'A';
    *q = 100;
    cout << "symb = " << symb << endl;
    cout  << "num = " << num << endl;
    return 0;
}