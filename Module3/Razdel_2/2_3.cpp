//
// Created by sasha on 13.03.2024.
//Написать программу, в которой используется функция f() с рекурсивным вызовом.
// При помощи данной функции необходимо найти факториал числа 3 и вывести его на консоль.
#include <iostream>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int result = factorial(3);

    std::cout << "Factorial number 3 =: " << result << std::endl;

    return 0;
}