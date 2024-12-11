#include <iostream>
#include <cmath>

int r(int x, int y){
    return pow((3 * x), 2) + pow(y, 2);
}

int b(int x, int y){
    return 2 * (pow(x, 2)) + (pow(5 * y, 2));
}

int c(int x, int y){
    return -100 * x + (pow(y, 3));
}

int main(){
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        int x, y;
        std::cin >> x >> y;
        int rafael = r(x,y);
        int beto = b(x,y);
        int carlos = c(x, y);
        
        if ((rafael > beto) && (rafael > carlos)){
            std::cout << "Rafael ganhou\n";
        }
        else if ((beto > rafael) && (beto > carlos)){
            std::cout << "Beto ganhou\n";
        }
        else{
            std::cout << "Carlos ganhou\n";
        }
    }
    return 0;
}
