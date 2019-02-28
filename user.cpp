#include"pch.h"
#include<iostream>
#include"bank.h"

void User::setUser(int acc, string nm, int pw, double bal, int sta)
{
	account = acc;
	name = nm;
	password = pw;
	balance = bal;
	state = sta;

};