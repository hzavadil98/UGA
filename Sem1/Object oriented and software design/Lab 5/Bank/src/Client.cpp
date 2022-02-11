#include "../include/Client.h"

void Client::print(ostream &o) {
	o<<"client: "<<name<<endl;
	o<<"id: "<<id<<endl;
	o<<"max: "<<max<<endl;
	for (int i=0; i<accts.size(); i++)
		operator<<(o, *(accts[i]));
}


void Client::createAccount() {
	if (check()) return;
	bool type, blocked;
	cout<<"Creation of accounts for "<<name<<":\nSavings(0) or Current(1) 1/0?\n";
	cin>>type;
	if (!type){
		cout<<"Blocked(1) or Unblocked(0) 1/0?\n";
		cin>>blocked;
		accts.push_back(new SavingsAccount(blocked));
	}
	else accts.push_back(new CurrentAccount());
}
