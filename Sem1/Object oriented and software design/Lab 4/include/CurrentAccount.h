#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H


#include <iostream>
#include "../include/Account.h"
using namespace std;
typedef unsigned int uint;

class CurrentAccount: public Account {
	public:
		int debit(double x);
		void print(ostream &o) {Account::print(o);o<<"\ttype: Current Account\n";}
};



#endif
