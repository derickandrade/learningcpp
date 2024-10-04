#include <iostream>

int main()
{
    std::cout << "Insira um numero inteiro: ";
    int x{};
    std::cin >> x;

    if (x > 0)
        std::cout << "O numero eh positivo\n";

    else if (x < 0)
        std::cout << "O numero eh negativo\n";

    else
        std::cout << "O numero eh zero\n";

    return 0;
}

