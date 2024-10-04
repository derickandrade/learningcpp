#include <iostream>

int readNumber()
{
    std::cout << "Insira um numero inteiro: ";
    int numero{};
    std::cin >> numero;

    return numero;

}

void writeAnswer(int resultado)
{
    std::cout << "A soma eh igual a: " << resultado;
}