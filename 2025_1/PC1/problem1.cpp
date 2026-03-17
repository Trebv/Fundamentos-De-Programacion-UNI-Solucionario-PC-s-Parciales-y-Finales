#include <iostream>
#include <cmath>

double b(int n);
double fract(int k, int n);

int main(){
    std::cout << "Ingrese un entero n: ";
    int n {};
    std::cin >> n;

    double x { 1 + 1.0 / fract(1,  n)};
    std::cout << "El valor de x es: " << x << '\n';
    return 0;
}


double b(int n) {
    double sign = ( n % 2 == 0 ) ? 1.0 : -1.0;
    return sign * std::ceil(n/ 2.0);
}

double fract(int k, int n){
    if (k == n) {
        return n;
    }
    return k + b(k)/ fract(k + 1, n);
}