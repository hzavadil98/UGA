#ifndef POLY_H
#define POLY_H

#include "../include/Function.h"
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Poly: public Function {
	private:
		vector<double> coeff;
	public:
		Poly(int order, double* k);
		double eval(double x0);
		void print(ostream &o);
		Poly* derivative();
};


#endif
