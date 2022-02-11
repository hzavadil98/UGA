#include <iostream>
#include <fstream>
#include "../include/Account.h"
#include "../include/CurrentAccount.h"
#include "../include/SavingsAccount.h"
#include "../include/Client.h"
#include "../include/Bank.h"

using namespace std;
typedef unsigned int uint;

int main(int argc, char** argv) {

	std::ofstream ofs;
	ofs.open ("../bin/out.txt", std::ofstream::out);

	ofs<<"\ncurrent account tests, can it go negative\n";
	CurrentAccount c;
	c.credit(100.);
	ofs<<c;
	c.debit(75.);
	ofs<<c;
	c.debit(50.);
	ofs<<c;
	ofs<<"\nsavings account, can it debit, does interest percent work?\n";
	SavingsAccount s(true);
	s.credit(100);
	ofs<<s;
	s.add_interest();
	ofs<<s;
	SavingsAccount s2(false);
	s2.credit(100);
	ofs<<s2;
	s2.add_interest();
	ofs<<s2;

	Client b("billy ray cyrus", 2, 1);
	b.print(ofs);
	b.createAccount();
	b.createAccount();
	ofs<<"credit: "<<b.credit(100, 0);
	ofs<<"credit: "<<b.credit(101, 1);
	ofs<<"credit: "<<b.debit(200, 0);
	ofs<<"credit: "<<b.debit(201, 1);
	b.print(ofs);

	Bank j;
	j.insertClient(&b);
	Client *z = new Client("joe list", 1, 2);
	j.insertClient(z);
	j.print(ofs);

	ofs.close();
	return 0;
}
