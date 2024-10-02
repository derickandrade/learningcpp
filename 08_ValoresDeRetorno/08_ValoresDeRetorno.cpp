#include <iostream>
/*
//int indica que a funcao retornara um inteiro

int retornaCinco()
{
    return 5;
}

int main()
{
    std::cout << retornaCinco() << "\n";
    std::cout << retornaCinco() + 2 << "\n";

    retornaCinco(); //retorna 5 mas pra nada

    return 0;
}
*/
int pegarValorDoUsuario()
{
    std::cout << "Insira um numero inteiro: ";
    int input{};
    std::cin >> input;

    return input; //retorna para o caller o que o usuario digitou
}

int main()
{
    int x{ pegarValorDoUsuario() };
    int y{ pegarValorDoUsuario() };

    std::cout << x << " + " << y << " = " << x + y << '\n';

    return 0;
}