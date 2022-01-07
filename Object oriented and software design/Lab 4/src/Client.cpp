#include "../include/Client.h"

void Client::print(ostream &o) {
	o<<"client: "<<name<<endl;
	o<<"id: "<<id<<endl;
	o<<"checking account: \n";
	check_c();
	c->print(o);
	o<<"savings account: \n";
	check_s();
	s->print(o);
}
