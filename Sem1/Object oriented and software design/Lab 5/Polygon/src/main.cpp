#include <iostream>
#include "../include/Function.h"
#include "../include/Poly.h"

using namespace std;

int main() {
	/*
	double *c = new double[10];
	for (int i=0;i<10;i++)
		c[i] = i*3.14*3.14/10;
	Poly g(6, c);
	g.print(cout);
	Poly *f = g.derivative();
	f->print(cout);
	*/
	double *c = new double[10];
	c[0] = 6.;
	c[1] = 2;
	c[2] = 5;
	c[3] = 10;
	c[4] = 3;
	c[5] = 2;
	Poly *f1 = new Poly(1, c);
	Poly *f2 = new Poly(2, c+1);
	Poly *f3 = new Poly(3, c+3);
	f1->print(cout);
	f2->print(cout);
	f3->print(cout);

	f1->derivative()->print(cout);
	cout<<"eval f1's derivative at 1: "<<f1->derivative()->eval(1)<<endl;
	f2->derivative()->print(cout);
	cout<<"eval f2's derivative at 1: "<<f2->derivative()->eval(1)<<endl;
	f3->derivative()->print(cout);
	cout<<"eval f3's derivative at 1: "<<f3->derivative()->eval(1)<<endl;

	return 0;
}
