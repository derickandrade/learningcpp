#include <iostream>

int main()
{
    /*int x{5};
    std::cout << "x eh igual a: " << x << '\n'; //convencional
    std::cout << "abc" << "\n";
    std::cout << "____________\n"; //convencional
    std::cout << "Insira um numero: ";
    int num{}; //inicia a variavel pra receber o numero
    std::cin >> num; //pega o valor do console e coloca em num
    std::cout << "Vc inseriu " << num << '\n';
    std::cout << "Insira dois numeros separados por espaco: ";
    int a{};
    int b{};
    std::cin >> a >> b; //pega dois numeros e guarda em 'a' e 'b' respectivamente
    std::cout << "vc inseriu " << a << " e " << b << '\n'; */

    std::cout << "insira tres numeros separados por espaco: ";

    int x{};
    int y{};
    int z{};
    
    std::cin >> x >> y >> z;
    std::cout << "vc inseriu " << x << ", " << y << " e " <<  z << "."<< '\n';

}

