
#include "../include/CurrentAccount.h"

using namespace std;
typedef unsigned int uint;

int CurrentAccount::debit(double x) {
	if (balance==0) return -1;
	else if ((balance-x)<0) {
		double received=balance-x;
		balance=0.;
		return -2;
	}
	else {
		double received=x;
		balance -=x;
		return 1;
	}
}
