#include <iostream>

using namespace std;

int main(){
    system("chcp 1251 > nul");
    setlocale(LC_ALL, "rus");
    cout << "������ ���!" << endl;
    system("pause > nul");
    return 0;
}