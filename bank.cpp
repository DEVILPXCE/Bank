#include"pch.h"
#include"bank.h"
#include<iostream>
#include<cstring>
#include<fstream>

using namespace std;

void Bank::login()
{
	//���ļ������ݶ����ڴ��
	
	char   stfID[20];
	char   stfpswd[20];
	string stfname;


	
	cout <<"����������ID\n";
	cin >> stfID;
	//�ж������ݿ����Ƿ���ڸ�ID���룻
}
 Bank::Bank()
{
	 ifstream infile;
	 
	 infile.open("usersdata", ios::in);
	 
	 if (!infile)
	 {
		 cout << "OPEN ERROR" << endl;
		 exit(1);
	 };

	 int acc;
	 string nm;
	 int pw;
	 int bal;
	 int sta;

	 int i;

	 while (!infile.eof())//���ļ�����ɹ�
	 {
		 infile >> acc;
		 nm = infile.get();


	 };




}