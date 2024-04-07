#include <iostream>
#include "myStrinG.h"
using namespace std;


int myStrinG::countString = 0;

int main() {

	const int MAXSIZE = 345;
	char* userInp = new char[MAXSIZE];

	

	myStrinG str1;
	myStrinG str2(100);
	

	cout << "str1: ";
	str1.input();
	str1.output();
	cout << '\0';

	cout << endl;
	cout << "str2: ";
	str2.input();
	str2.output();
	cout << '\0';




	cout << endl;
	cout << "Enter string: ";
	cin.getline(userInp, MAXSIZE + 1);
	myStrinG str3(userInp, strlen(userInp));

	cout << "str 3 : ";
	str3.output();
	cout << '\0';

	int count = myStrinG::getCountStr();
	cout << "Count of strings: ";
	cout << count << endl;

	
	
	

	return 0;
}