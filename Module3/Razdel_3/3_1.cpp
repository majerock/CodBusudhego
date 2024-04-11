//Написать программу, в которой используется структура с именем ‘New’.
// В данной структуре инициализируются следующие переменные: ‘first’ с типом данных int и ‘second’ с типом данных char.
// В данные переменные помещаются произвольные значения.
// Организовать вывод значений данных переменных при помощи функции int main().

#include <iostream>

// Структура New
struct New {
    int first;
    char second;
};

int main() {
    // Инициализация структуры New и ее переменных
    New myNew;
    myNew.first = 10;
    myNew.second = 'A';

    // Вывод
    std::cout << "first: " << myNew.first << std::endl;
    std::cout << "second: " << myNew.second << std::endl;

    return 0;
}