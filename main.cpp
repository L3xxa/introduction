#include <iostream>
#include <Windows.h>

void setConsoleColor(int textColor, int backgroundColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (backgroundColor << 4) | textColor);
}

int main() {

    setConsoleColor(15, 1);

    std::cout << "+-----------------+" << std::endl;
    std::cout << "|  Hello! World!  |" << std::endl;
    std::cout << "+-----------------+" << std::endl;


    setConsoleColor(7, 0);


    return 0;
}

