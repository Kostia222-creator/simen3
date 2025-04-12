#include <iostream>
#include <math.h>
#include <cstdlib>
#include "pineapple.h"


double Calculate(double N1, char math, double N2) {
	switch (math) {
	case '+': return Plus(N1, N2); break;
	case '-': return Minus(N1, N2); break;
	case '*': return Umnog(N1, N2); break;
	case '/': return Delenie(N1, N2); break;
	}
    return 0;
}

int main(int argc, char** argv) {
    if (argc >= 3){
		double N1 = std::atof(argv[1]);
		double N2 = std::atof(argv[3]);
		char math = argv[2][0] ;
		double result = Calculate(N1, math, N2);
		std::cout << "Result: " << N1 << " " << math << " " << N2 << " = " << result << std::endl;
	}
	return 0;
}