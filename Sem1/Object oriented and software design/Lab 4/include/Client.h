#ifndef CLIENT_H
#define CLIENT_H

#include "../include/SavingsAccount.h"
#include "../include/CurrentAccount.h"
#include <string>


using namespace std;
typedef unsigned int uint;

class Client {
	private:
		string name;
		uint id;
		CurrentAccount* c;
		SavingsAccount* s;
	public:
		Client(string n) {c=NULL; s=NULL; id=rand();name=n;}
		~Client() {if (c!=NULL) delete c; if (s!=NULL) delete s;}
		uint get_id() {return id;}
		void check_c() {if (c==NULL) c = new CurrentAccount();}
		void check_s() {if (s==NULL) s = new SavingsAccount(false);}
		void credit_savings(double a) {check_s(); s->credit(a);}
		void credit_current(double a) {check_c(); c->credit(a);}
		int debit_savings(double a) {check_s(); return s->debit(a);}
		int debit_current(double a) {check_c(); return c->debit(a);}
		void print(ostream &);
};



#endif
