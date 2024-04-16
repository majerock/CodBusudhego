//
// Created by sasha on 11.04.2024.
//Создать программу, используя класс ‘CObject’ и функцию ‘int main()’.
// Реализовать в классе блоки с типами ‘public’ и ‘private’.
// В функции ‘int main()’ инициализируется переменная ‘q’ с типом данных ‘char’.
// Вывести значение переменной ‘q’ на консоль.

#include <iostream>

class CObject {
public:
    void printQ(char q) {
        std::cout << "q: " << q << std::endl;
    }

private:

};

int main() {
    char q = 'A';

    CObject obj;

    obj.printQ(q);

    return 0;
}