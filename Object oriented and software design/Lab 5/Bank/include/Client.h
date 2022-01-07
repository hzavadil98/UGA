#ifndef CLIENT_H
#define CLIENT_H

#define IRATEBLOCKED 4
#define IRATEUNBLOCKED 2

#include "../include/SavingsAccount.h"
#include "../include/CurrentAccount.h"
#include <string>
#include <vector>
#include <iostream>


using namespace std;
typedef unsigned int uint;

class Client {
	private:
		string name;
		uint id, max;
		vector<Account*> accts;
	public:
		Client(string n, int m, uint i) {max = m; id = i; name=n;}
		Client(const Client& c): Client(c.name, c.max, c.id) {}
		~Client() {while (!accts.empty()) {delete accts.back(); accts.pop_back();};}
		uint get_id() {return id;}
		bool check() {return (accts.size()<max) ? false : true;}
		int debit (double a, int k) {if (check()) return accts[k]->debit(a); return -3;}
		int credit(double a, int k) {if (check()) return accts[k]->credit(a); return -3;}
		void print(ostream &);
		void createAccount();
};



#endif
