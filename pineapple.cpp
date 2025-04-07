#include <iostream>

double Plus(double N1, double N2) {
    return N1 + N2;    
}
double Minus(double N1, double N2) {
        return N1 - N2;
}
double Umnog(double N1, double N2) {
    return N1 * N2;
}
double Delenie(double N1, double N2) {
    double result = 0;
    if (N2 == 0) {exit(1);}
    else {
        result = N1 / N2;
    }
    return result;
}