//
// Created by sasha on 22.04.2024.
//Написать программу, в которой используется класс исключения с директивой ‘#include ’.
// В программе инициализируется класс с именем ‘NewException’, при работе которого выводится следующая строка:
// “В программе инициализирован класс ‘NewException’!”.
// В функции main() реализовать оператор ‘catch’, при работе которого на консоль выводится строка: исключение:’.

#include <iostream>

class NewException {
public:
    NewException() {
        std::cout << "Init class 'NewException'!" << std::endl;
    }
};

int main() {
    try {
        throw NewException();
    } catch (...) {
        std::cout << "Exception!" << std::endl;
    }

    return 0;
}