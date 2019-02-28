#include<iostream>
#include"pch.h"
#include"bank.h"

using namespace std;

void User::setUser(int acc, string nm, int pw, double bal, int sta)
{
	account = acc;
	name = nm;
	password = pw;
	balance = bal;
	state = sta;
};



