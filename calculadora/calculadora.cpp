#include <iostream>

double input()
{
    std::cout << "Insira um valor duplo: ";
    double x{};
    std::cin >> x;

    return x;
}

int main()
{
    double num1{ input() };
    double num2{ input() };


    std::cout << "Digite +, -, * ou /: ";
    char op{};
    std::cin >> op;

    if (op == '+')
        std::cout << static_cast<double>(num1) << " + " << static_cast<double>(num2) << " eh "
        << static_cast<double>(num1 + num2) << '\n';
    
    else if (op == '-')
        std::cout << static_cast<double>(num1) << " - " << static_cast<double>(num2) << " eh "
        << static_cast<double>(num1 - num2) << '\n';

    else if (op == '*')
        std::cout << static_cast<double>(num1) << " * " << static_cast<double>(num2) << " eh "
        << static_cast<double>(num1 * num2) << '\n';

    else if (op == '/')
        std::cout << static_cast<double>(num1) << " / " << static_cast<double>(num2) << " eh "
        << static_cast<double>(num1 / num2) << '\n';

    return 0;
}

