//
// Created by sasha on 25.11.2023.
//По правилам этикета при приветствии «Доброе утро» говорят только с 6:00 до 10:59,
// «Добрый день» — с 11:00 до 17:59, «Добрый вечер» — с 18:00 и до 22:59.
// Вам дан номер текущего часа h. Требуется вывести Good morning, если нужно сказать «Доброе утро»;
// Good day, если нужно сказать «Добрый день»; Good evening, если нужно сказать «Добрый вечер».

#include <iostream>

int main () {
    std::cout << "What time is it? (24H format)" << std::endl;
    std::cout << "Enter (0-23): " ;
    int a;
    std::cin >> a ;
    switch (a) {
        case 6 ... 10 :
            std::cout << "Good Morning!";
            break;
        case 11 ... 17 :
            std::cout << "Good day!";
            break;
        case 18 ... 22 :
            std::cout << "Good evening!";
            break;
        case 23:
        case 0 ... 5:
            std::cout << "Good night!";
            break;
        default :
            std::cout << "Wrong Type!";
            break;

    }
}

