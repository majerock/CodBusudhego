//
// Created by sasha on 12.03.2024.
//Написать программу, в которой инициализируются структура с именем ‘New’
// и двумя переменными - ‘age’ и ‘name’.
// Необходимо задать значения данным переменным в функции int main()
// и вывести их на консоль.

#include <iostream>

int main() {
    enum First {
        a=12,
        b=13
    };
    enum Second {
        c=14,
        d=15
    };
    std::cout<< "First number from First = " << a << std::endl ;
    std::cout<< "First number from Second = " << c << std::endl ;

}