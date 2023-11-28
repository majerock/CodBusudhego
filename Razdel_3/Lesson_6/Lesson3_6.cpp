//
// Created by sasha on 28.11.2023.
//

#include <iostream>
#include <windows.h>
#include <conio.h>


int main() {
    double balance, depositAmount, withdrawalAmount, a;
    int b;
    bool stopcode;
    balance=(-1);
    stopcode=1;
    while (balance < 0) {
        std::cout << "Enter start balance:";
        std::cin >> a;
        a < 0 ? std::cout << "Enter positive number" << std::endl : (std::cout << "Sucsess!" << std::endl);
        Sleep(2000);
        balance=a;
    };
    while (stopcode>0) {
        std::cout << " " << std::endl ;
        std::cout << "Welcome to ATM" << std::endl ;
        std::cout << "Select func please from menu:" << std::endl ;
        std::cout << "1) View balance" << std::endl ;
        std::cout << "2) Deposit Amount" << std::endl ;
        std::cout << "3) Withdrawal Amount" << std::endl ;
        std::cout << "4) Exit" << std::endl ;
        std::cin >> b;
        switch(b) {
            case 1:
                std::cout << "Balance: " << balance << std::endl ;
                balance = balance;
                std::cout << " " << std::endl ;
                Sleep(2000);
                break;
            case 2:
                depositAmount=(-1);
                while (depositAmount < 0) {
                    std::cout << "How much:";
                    std::cin >> depositAmount;
                    if (depositAmount < 0) std::cout << "Enter positive number" << std::endl;
                    else {std::cout << "Sucsess!" << std::endl;
                        balance=balance+depositAmount;};
                    std::cout << " " << std::endl ;
                    Sleep(2000);
                };
                break;
            case 3:
                withdrawalAmount=(-1);
                while (withdrawalAmount < 0) {
                    std::cout << "How much:";
                    std::cin >> withdrawalAmount;
                    if (withdrawalAmount < 0) std::cout << "Enter positive number" << std::endl;
                    else {while (withdrawalAmount > balance) {
                            std::cout << "Enter number LOWER than balance:";
                            std::cin >> withdrawalAmount;
                    }  balance=balance-withdrawalAmount;
                        std::cout << "Sucsess!" << std::endl;};
                    std::cout << " " << std::endl ;
                    Sleep(2000);
                };
                break;
            case 4:
                std::cout << "Are you sure? Enter 0 for exit:";
                std::cin >> stopcode;
                break;
            default:
                std::cout << "Wrong type!";
                Sleep(2000);
        }
    }
    std::cout << "Bye dear friend!" << std::endl ;

}