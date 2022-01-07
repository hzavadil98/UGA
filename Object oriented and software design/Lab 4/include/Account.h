#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
using namespace std;
typedef unsigned int uint;
#define IRATEBLOCKED 4
#define IRATEUNBLOCKED 2

class Account{
	private:
		uint id;
	protected:
		double balance;
	public:
		Account() {balance=0;id=rand();}
		uint get_id() {return id;}
		void credit(double x) {balance+=x;}
		int debit(double x);
		void print(ostream &o) {o<<"account id: "<<id<<"\n\tbalance: "<<balance<<'\n';}
};

#endif
