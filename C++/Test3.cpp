#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int a = 10;        // Обычная переменная
    int* ptr = &a;     // Указатель ptr хранит адрес переменной a

    cout << "Значение a: " << a << endl;          // Вывод: 10
    cout << "Адрес a: " << &a << endl;           // Вывод: адрес в памяти (например, 0x7ffee4c0a4ac)
    cout << "Значение ptr: " << ptr << endl;     // Вывод: тот же адрес
    cout << "Значение по адресу ptr: " << *ptr << endl; // Вывод: 10

    *ptr = 20;         // Изменяем значение по адресу
    cout << "Новое значение a: " << a << endl;   // Вывод: 20

    return 0;
}