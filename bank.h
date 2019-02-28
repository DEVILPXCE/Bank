#pragma once
#include <cstring>
#include <iostream>
using namespace std;

const int userN = 10;
class Bank;

class User 
{
public:
	void setUser(int acc,string nm,int pw,double bal,int sta);
	void showAccount();
	bool passwordIsRight();
	bool UserIsNormal();
	friend class Bank;

private:
	int account;
	string name;
	int password;
	int balance;
	int state;

};





class Bank
{
public:
	Bank();//构造函数，涉及文件系统,暂时跳过
	~Bank();//析构函数，涉及文件系统，暂时跳过
	void login();//涉及工作人员信息
	bool loginIsRight();
	void startwork();
	void startAccount();
	void deleteAccount();
	void save();
	void draw();
	void showAccount();
	void transfer();
	void reportLoss();
	void cancleLoss();
	void changePassword();

private:
	int N;
	//User users[userN];//！！！改为动态数组
	User *U = new User[N];


};