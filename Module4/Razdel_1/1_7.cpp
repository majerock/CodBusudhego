//
// Created by sasha on 11.04.2024.
//Создать программу, используя класс ‘CObject’ и функцию ‘int main()’.
// Реализовать в классе блоки с типами ‘public’ и ‘private’.
// В функции ‘int main()’ инициализируется переменная ‘s’ с типом данных ‘char’ и произвольным содержимым.
// Вывести значение переменной ‘s’ на консоль.

#include <iostream>

class CObject {
public:
    void display() {
        std::cout << "This Public method class CObject" << std::endl;
    }

public:
    char publicChar = 'A';

private:
    char privateChar = 'B';

public:
    char getPrivateChar() const {
        return privateChar;
    }
};

int main() {
    char s = 'X';

    std::cout << "s: " << s << std::endl;

    return 0;
}
