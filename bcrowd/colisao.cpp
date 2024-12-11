#include <iostream>
bool linha(int ax, int bx, int rx){
    if((rx >= ax) && (rx <= bx)){
        return true;
    }
    return false;
}

bool coluna(int ay, int dy, int ry){
    if ((ry >= ay) && (ry <= dy)){
        return true;
    }
    return false;
}

int main(){
    int n, ax, ay, bx, by, cx, cy, dx, dy, rx, ry;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy >> rx >> ry;
        std::cout << ((linha(ax, bx, rx)) && (coluna(ay, dy, ry))) ? '1' : '0';
        std::cout << '\n';
    }
  return 0;
}
