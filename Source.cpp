#include <iostream>
#include "myStrinG.h"
using namespace std;


int myStrinG::countString = 0;

int main() {

	const int MAXSIZE = 345;
	char* userInp = new char[MAXSIZE];

	myStrinG str1(20);
	myStrinG str2(20);

	str1.input();
	str1.output();
	cout << "^^^^" << endl;

	str2.input();
	str2.output();

	int result = str1.myStrCmp(str2);
	cout << result << endl;


	//myStrinG str22(50);
	//str22.input();
	//cout << "STR22: " << endl;
	//str22.output();

	//cout << "^^^^^^^^^\n";
	//cout << "^^^^^^^^^\n";
	//cout << "Enter searched string: ";
	//cin.getline(userInp, MAXSIZE);
	//bool result = str22.myStrStr(userInp);
	//cout << "^^^^^^^^^\n";
	//cout << result;
	//str22.output();

	//myStrinG str1;
	//myStrinG str2(100);
	//

	//cout << "str1: ";
	//str1.input();
	//str1.output();
	//cout << '\0';


	//char userStr[] = { "Hello world" };
	//cout << userStr;

	//cout << endl;
	//cout << "str2: ";
	//str2.myStrCopy(userStr, sizeof(userStr));
	//str2.output();
	//
	//
	//cout << '\0';


	//cout << "STR 4: ";
	//myStrinG str4(200);
	//str4.myStrConcat(str1, str2);
	//str4.output();
	//cout << "-------=";



	//cout << endl;
	//cout << "Enter string: ";
	//cin.getline(userInp, MAXSIZE + 1);
	//myStrinG str3(userInp, strlen(userInp));

	//cout << "str 3 : ";
	//char userCh;
	//cout << "Enter char: ";
	//cin >> userCh;
	//str3.output();
	//int index = str3.searchCh(userCh);
	//cout << index + 1<< endl;
	//cout << '\0';

	//int count = myStrinG::getCountStr();
	//cout << "Count of strings: ";
	//cout << count << endl;

	delete[] userInp;
	
	

	return 0;
}