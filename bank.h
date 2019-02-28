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
	Bank();//���캯�����漰�ļ�ϵͳ,��ʱ����
	~Bank();//�����������漰�ļ�ϵͳ����ʱ����
	void login();//�漰������Ա��Ϣ
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
	//User users[userN];//��������Ϊ��̬����
	User *U = new User[N];


};