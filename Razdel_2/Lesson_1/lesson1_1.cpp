//
// Created by sasha on 25.11.2023.

#include <iostream>
#include <cmath>
#include <string>

int main () {
    int chose;
    std::string vibor;
    std::cout<< "What figure? " << std::endl;
    std::cout<< "(You can use: square, rectangle, circle, triangle)" << std::endl;
    std::cout<< "Enter: " ;
    getline(std::cin, vibor);
    if (vibor=="square") chose=1;
    else {if (vibor=="rectangle") chose=2;
        else { if (vibor=="circle") chose=3;
            else {if (vibor=="triangle") chose=4;
            else chose=0;}}}


    switch (chose) {
        case (0):
            std::cout<< "Wrong type" ;
            break;
        case (1):
            double a;
            std::cout<< "Enter a:";
            std::cin >> a;
            std::cout<< "Area:" << a*a ;
            break;

        case (2):
            double a1,b1;
            std::cout<< "Enter a:";
            std::cin >> a1;
            std::cout<< "Enter b:";
            std::cin >> b1;
            std::cout<< "Area:" << a1*b1 ;
            break;
        case (3):
            double r;
            std::cout<< "Enter r:";
            std::cin >> r;
            std::cout<< "Area:" << M_PI*r*r ;
            break;
        case (4):
            double a3,b3,c3,p;
            std::cout<< "Enter a:";
            std::cin >> a3;
            std::cout<< "Enter b:";
            std::cin >> b3;
            std::cout<< "Enter c:";
            std::cin >> c3;
            p = (a3+b3+c3)/2;
            std::cout<< "Area:" << sqrt(p*(p-a3)*(p-b3)*(p-c3)) ;
            break;
    }
}