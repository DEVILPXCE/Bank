#include"pch.h"
#include"bank.h"
#include<iostream>
#include<cstring>
#include<fstream>

using namespace std;

void Bank::login()
{
	//把文件内数据读入内存后
	
	char   stfID[20];
	char   stfpswd[20];
	string stfname;


	
	cout <<"请输入您的ID\n";
	cin >> stfID;
	//判断在数据库中是否存在该ID号码；
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

	 while (!infile.eof())//若文件读入成功
	 {
		 infile >> acc;
		 nm = infile.get();


	 };




}