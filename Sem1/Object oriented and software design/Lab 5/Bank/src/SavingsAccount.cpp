#include "../include/SavingsAccount.h"

int SavingsAccount::debit(double x) {
	if (blocked) return -1;
	if ((balance-x)<0) {
		return -1;
	}
	else {
		balance -=x;
		return 1;
	}
}
