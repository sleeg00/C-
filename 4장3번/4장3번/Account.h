#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
using namespace std;
#include <cstring>
class Account
{
	string a;
	int id, nmg;
public:
	Account() {};
	Account(string k, int i, int nm);
	void deposit(int num);
	string getOwner();
	int inquiry();
	int withdraw(int ch);
};
#endif ACCOUNT_H