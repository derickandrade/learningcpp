#include <iostream>


void doA()
{
    std::cout << "In doA()\n";
}

void doB()
{
    std::cout << "In doB()\n";
    doA(); //funcoes podem ser chamadas dentro de funcoes
}

void doPrint()
{
    std::cout << "In doPrint()\n";
}

int main()
{
    /*
    void foo()
    {
        std::cout << "foo!\n"; 
    }
    Funcoes nao podem ser definidas dentro de funcoes (aninhadas)
    */


    std::cout << "Starting main()\n";
    doPrint();
    doA();
    doB();
    std::cout << "Ending main()\n";

    return 0;
}

