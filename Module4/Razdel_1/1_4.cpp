//
// Created by sasha on 11.04.2024.
//Написать программу, в которой используются классы с именами ‘W’ и ‘Q’.
// В классе с именем ‘W’ инициализируются две переменные:
// одна с типом данных unsigned, а другая с типом данных string, а в классе с именем ‘Q’ инициализируется одна переменная с типом данных string.
// В функции int main() вводятся произвольные значения переменных. Значения переменных продемонстрировать на консоли.
// При выводе значения следующей переменной использовать управляющий оператор перехода на следующую строку (‘\n’).

#include <iostream>
#include <string>

class W {
public:
    unsigned int num;
    std::string str;
};

class Q {
public:
    std::string str;
};

int main() {
    W wObj;
    std::cout << "Enter num for class W: ";
    std::cin >> wObj.num;
    std::cout << "Enter str for class W: ";
    std::cin >> wObj.str;

    Q qObj;
    std::cout << "Enter str for class Q: ";
    std::cin >> qObj.str;

    std::cout << "num for class W: " << wObj.num << "\n";
    std::cout << "str for class W: " << wObj.str << "\n";
    std::cout << "str for class Q: " << qObj.str << "\n";

    return 0;
}