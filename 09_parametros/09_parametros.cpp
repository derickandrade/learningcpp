#include <iostream>
int receberValor()
{
    std::cout << "Insira um numero inteiro: ";
    int input{};
    std::cin >> input;

    return input;
}

void printar(int valor)
{
    std::cout << valor << " dobrado eh igual a " << valor * 2 << '\n';

}

int main()
{
    printar(receberValor());
}

