#include <iostream>
void doNothing(int&)
{

}

int main()
{
    int x;

    doNothing(x); //faz o compilador pensar que esta definindo um valor na variavel

    std::cout << x << '\n';

    return 0;
}

