#include <iostream>

int main()
{
    std::cout << "Insira um numero inteiro: ";
    int num{};
    std::cin >> num;
    std::cout << "O dobro de " << num << " eh igual a " << num * 2 << '\n';
    std::cout << "O triplo de " << num << " eh igual a " << num * 3 << '\n';

    return 0;
}
