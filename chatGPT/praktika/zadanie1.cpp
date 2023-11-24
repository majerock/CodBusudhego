//
// Created by sasha on 03.11.2023.
//

#include <iostream>

int main() {
    float sum=0.00,points;
    int stud;
    std::cout << "Students:";
    std::cin >> stud;
        for (int i = 1; i <= stud; i++) {
            std::cout << "point:" ;
            std::cin >> points;
            sum=sum+points;
        }
        std::cout << "Average:" << sum/stud <<std::endl;
        return 0;
    }