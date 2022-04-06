#include "Account.h"

Account::Account(string k, int i, int nm)
{
	a = k;
	id = i;
	nmg = nm;
}
void Account::deposit(int i)
{
	nmg += i;
}
string Account::getOwner()
{
	return a;
}
int Account::inquiry()
{
	return nmg;
}
int Account::withdraw(int ch2)
{
	nmg -= ch2;
	return nmg ;
}