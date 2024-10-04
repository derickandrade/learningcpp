#include <iostream>

void print(int tempo, int altura)
{
    double atual{ (9.8 * (tempo * tempo)) / 2 };
    if (altura - atual > 0)
        std::cout << "Em " << tempo << " segundos, a bola esta na altura: " << altura - atual << " metros\n";
    else
        std::cout << "Em " << tempo << " segundos, a bola esta no chao.\n";
}

int main()
{
    std::cout << "Insira a altura da torre em metros: ";
    int altura{};
    std::cin >> altura;
    
    print(0, altura);
    print(1, altura);
    print(2, altura);
    print(3, altura);
    print(4, altura);
    print(5, altura);
}
