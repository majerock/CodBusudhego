//
// Created by sasha on 11.04.2024.
//Написать программу, в которой используется класс исключения с директивой ‘#include ’.
// В программе инициализируется класс с именем ‘New’, при работе которого выводится следующая строка: “В программе инициализирован класс ‘New’!”.
// В функции main() реализовать оператор ‘catch’, при работе которого на консоль выводится строка: ‘Новое исключение:’.
// Результаты продемонстрировать на консоли.

#include <iostream>

class NewException : public std::exception {
public:
    const char* what() const noexcept override {
        return "New  exception";
    }
};

class New {
public:
    New() {
        std::cout << "In programm class 'New'!" << std::endl;
    }
};

int main() {
    try {
        New newObj;

        throw NewException();
    } catch (const NewException& e) {
        std::cout << e.what() << ": ";
        std::cerr << "Ошибка! Обработано исключение типа NewException." << std::endl;
    }

    return 0;
}
