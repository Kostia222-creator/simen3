#include <iostream>
#include <math.h>
#include <cstdlib>
#include "pineapple.h"

double root(double a, double n) {
	return pow(a, 1 / n);
}

double log(double a, double b) {
	return log(a) / log(b);
}

double Calculate(double N1, char math, double N2) {
	switch (math) {
	case '+': return Plus(N1, N2); break;
	case '-': return Minus(N1, N2); break;
	case '*': return Umnog(N1, N2); break;
    case '^': return pow(N1, N2); break;
	case 'R': return root(N1, N2) ; break;
	case 'L': return log(N1, N2); break;
	case '/': return Delenie(N1, N2); break;
	}
    return 0;
}



int main(int argc, char* argv[]) {
    double N1 = std::atof(argv[1]);
    double N2 = std::atof(argv[3]);
    char math = argv[2][0];
	double result = Calculate(N1, math, N2);
    std::cout << "Result: " << N1 << " " << math << " " << N2 << " = " << result << std::endl;
	return 0;
}