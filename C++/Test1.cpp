#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    system("chcp 1251 > null");
    setlocale(LC_ALL, "Rus");
    srand(time(NULL)); // Добавлена точка с запятой

    int massiv[10];
    for (int &n : massiv) { // Перебор элементов массива
        n = rand() % 10 + 1; // Генерация случайного числа от 1 до 10
        cout << n << " "; // Выводим значение элемента
    }
    return 0;
}