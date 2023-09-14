#include<iostream>
#include <cmath>
#include <cassert>

struct Punto{ double x, y; };

struct Triangulo{
    Punto a,b,c;
};

double calcularDistancia(struct Punto&, struct Punto&);
double calcularPermietro(struct Triangulo);

int main(){
    //assert(calcularPermietro({{0,0},{4,0},{2,4}})==8.48528);
    std::cout << calcularPermietro({{0,0},{4,0},{2,4}});
    //return 0;
}

double calcularDistancia(struct Punto& start, struct Punto& end){
    double a{end.x-start.x}, b{end.y-start.y};
    return sqrt(a*a + b*b);
}

double calcularPermietro(struct Triangulo t){
    return calcularDistancia(t.a, t.b) + calcularDistancia(t.b, t.b) + calcularDistancia(t.c, t.a);
}
