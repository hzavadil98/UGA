#ifndef BANK_H
#define BANK_H

#include<map>
#include <iostream>
#include "../include/Client.h"
using namespace std;
typedef unsigned int uint;

class Bank {
	private:
		map<uint, Client*> m;
	public:
		void insertClient(Client *c) {m.insert(pair<uint,Client*>(c->get_id(),c));}
		void print(ostream &o) {o<<"clients...\n";
			for(map<uint,Client*>::iterator i=m.begin();i!=m.end();++i)
				i->second->print(o);}
};


#endif
