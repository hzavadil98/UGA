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
		void print(ostream &o) const {
			o<<"account id: "<<id<<"\n\tbalance: "<<balance<<'\n';}
	public:
		Account() {balance=0;id=rand();}
		uint get_id() {return id;}
		int credit(double x) {balance+=x; return balance;}
		virtual int debit(double x)=0;
		friend ostream &operator<<(ostream &o, const Account &a) {
			a.print(o); return o;}
};

#endif


/*
Polymorphism is in this case useful to be able to overload << operator for all derived classes.

The debit function was made virtual, because class Account is virtual - there will never be an instance of class Account used. print method was made protected as it will only be accessed through the overloading of << operator in derived classes.
*/
