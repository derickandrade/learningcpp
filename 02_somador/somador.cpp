#include <iostream>

int readNumber();
void writeAnswer(int resultado);

/*
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
*/

int main()
{
    int x{ readNumber() };
    int y{ readNumber() };
    int resultado{ x + y };
    writeAnswer(resultado);


}

