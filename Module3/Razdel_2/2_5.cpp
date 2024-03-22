//
// Created by sasha on 22.03.2024.
//

#include <iostream>
#include <cstring>

int main() {
    char str1[] = "Prakticheskoe ";
    char str2[] = "Zanyatie!";
    char res[30];

    strcpy(res, str1);
    strcat(res, str2);

    std::cout << "Res: " << res << std::endl;

    return 0;
}
