//
// Created by sasha on 12.03.2024.
//Написать программу, в которой инициализируются перечисления названиями First и Second.
// В перечисление First необходимо поместить переменные ‘a’ и ‘b’,
// а в перечисление Second - переменные ‘c’ и ‘d’. Значения всех переменных произвольные.
// На консоль необходимо вывести только значения первых (по счету) элементов
// каждого из перечислений.

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