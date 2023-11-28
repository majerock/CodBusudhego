//
// Created by sasha on 28.11.2023.
//Даны два целых числа m и n (m>n).
// Напишите программу, которая выводит все нечетные целые числа от m до n включительно в порядке убывания.
// Входные данные: На вход программе подаются два целых числа m и n, каждое на отдельной строке.
// Выходные данные: Программа должна вывести числа в соответствии с условием задачи.

#include <iostream>
#include <cmath>

int main () {
    bool stopcode;
    long m,n;
    std::cout << "m=";
    std::cin >> m;
    std::cout << "n=";
    std::cin >> n;
    m>n ? stopcode=0 : stopcode=1;
    if (stopcode==1) std::cout << "Error";
    else {
        if (m % 2 == 0) {
            m = m - 1;
        } else {
            m=m-2;
        }

        while (m>n)
        { std::cout << m << " ";
            m=m-2;
        }
    }
}