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
    char* p;
    int* q;
    p = &symb;
    q =  &num;
    cout << "Hello world" << endl;
}