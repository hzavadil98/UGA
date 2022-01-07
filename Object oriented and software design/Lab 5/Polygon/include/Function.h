#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>
#include <string>
using namespace std;

class Function {
	private:
		string name;
	public:
		Function(string n) {name=n;}
		virtual double eval(double x0) =0;
		virtual Function* derivative() =0;
		virtual void print(ostream &o) {o<<"name: "<<name<<endl;}
};


#endif
