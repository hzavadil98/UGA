#include "../include/Poly.h"


Poly::Poly(int order, double* k): Function("Polynomial") {
  for (int i=0;i<order;i++) coeff.push_back(k[i]);

}

double Poly::eval(double x0) {
  double total = 0;
  for (int i=0;i<coeff.size();i++)
    total += coeff[i] * pow(x0, i);
  return total;
}

void Poly::print(ostream &o) {
  Function::print(o);
  o<<"f(x) = ";
  for (int i=0;i<coeff.size();i++)
    o<<coeff[i]<<"*x^"<<i<<" + ";
  o<<endl;
}


Poly* Poly::derivative() {
  double *k1 = new double[coeff.size()-1];
  for (int i=1;i<coeff.size();i++)
    k1[i-1] = coeff[i]*i;
  return new Poly(coeff.size()-1, k1);
}
