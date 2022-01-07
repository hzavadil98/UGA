#include <iostream>
#include "../include/Account.h"
#include "../include/CurrentAccount.h"
#include "../include/SavingsAccount.h"
#include "../include/Client.h"
#include "../include/Bank.h"

using namespace std;
typedef unsigned int uint;

int main(int argc, char** argv) {
	cout<<"general account\n";
	Account a;
	a.credit(69.);
	a.print(cout);

	cout<<"\ncurrent account tests, can it go negative\n";
	CurrentAccount c;
	c.credit(100.);
	c.print(cout);
	c.debit(75.);
	c.print(cout);
	c.debit(50.);
	c.print(cout);

	cout<<"\nsavings account, can it debit, does interest percent work?\n";
	SavingsAccount s(true);
	s.credit(100);
	s.print(cout);
	s.add_interest();
	s.print(cout);
	SavingsAccount s2(false);
	s2.credit(100);
	s2.print(cout);
	s2.add_interest();
	s2.print(cout);

	cout<<"\ntesting out a client\n";
	Client b("billy ray cyrus");
	b.credit_savings(100.);
	b.credit_current(200.);
	b.debit_savings(150.);
	b.debit_current(250.);
	b.print(cout);

	cout<<"\ntesting a bank\n";
	Bank j;
	j.print(cout);
	Client joe = Client("joe");
	j.insertClient(&joe);
	j.insertClient(&b);
	j.print(cout);
	return 1;
}
