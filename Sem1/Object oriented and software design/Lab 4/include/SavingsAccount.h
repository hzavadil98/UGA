#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "../include/Account.h"

using namespace std;
typedef unsigned int uint;

class SavingsAccount: public Account {
	private:
		// 1 for blocked
		bool blocked;
	public:
		SavingsAccount(bool is_blocked=false){blocked=is_blocked;}
		int debit(double x);
		double my_rate(){if (blocked) return IRATEBLOCKED/100.; return IRATEUNBLOCKED/100.;}
		void add_interest() {credit(balance*my_rate());}
		void print(ostream &o) {
			Account::print(o);
			o<<"\ttype: Savings Account\n\tblocked: "<<blocked<<"\n";}
};


#endif
