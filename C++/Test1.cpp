#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    system("chcp 1251 > null");
    setlocale(LC_ALL, "Rus");
    cout << "Hello world!" << endl;
    return 0;
}