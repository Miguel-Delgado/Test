#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("chcp 65001 > nul");
    int a = 100;
    int* p;
    p = &a;
    cout << "Твой ответ: "<< *p << endl;
    return 0;
}