//
// Created by sasha on 22.04.2024.
//Создать программу, используя класс ‘CObject’ и функцию ‘int main()’.
// Реализовать в классе блоки с типами ‘public’ и ‘private’.
// В функции ‘int main()’ инициализируется переменная ‘s’ с типом данных ‘char’ и произвольным содержимым.
// Вывести значение переменной ‘s’ на консоль.

#include <iostream>

class CObject {
public:
    void printS() {
        std::cout << "s: " << s << std::endl;
    }

private:
    char s;

public:
    void setS(char value) {
        s = value;
    }
};

int main() {
    CObject obj;
    char s = 'A';

    obj.setS(s);

    obj.printS();

    return 0;
}