#include <iostream>

int main()
{
    int Number01;
    int Number02;
    int Sum; // To add two or more numbers in C++ we use the '+'
    int Subtraction; // To subtract two or more numbers in C++ we use the '-'
    int Multiplication; // To multiply two or more numbers in C++ we use the '*'
    int Division; // To divide two or more numbers in C++ we use the '/'
    int Rest; // To show the rest of divisions in C++ we use the '%'

    std::cout << "Type the first number: ";
    std::cin >> Number01; 
    std::cout << "Number01 = " << Number01 << "\n";
    std::cout << "Type the second number: ";
    std::cin >> Number02;
    std::cout << "Number02 = " << Number02 << "\n";
    Sum = Number01 + Number02;
    std::cout << "The sum of the two numbers: " << Sum << "\n";
    Subtraction = Number01 - Number02;
    std::cout << "The subtraction of the two numbers: " << Subtraction << "\n";
    Multiplication = Number01 * Number02;
    std::cout << "The multiplication of the two numbers: " << Multiplication << "\n";
    Division = Number01 / Number02;
    std::cout << "The division of the two numbers: " << Division << "\n";
    Rest = Number01 % Number02;
    std::cout << "The rest of the division of two numbers: " << Rest << "\n";
     
    system("PAUSE");
}

