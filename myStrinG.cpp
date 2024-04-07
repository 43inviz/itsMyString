#include <iostream>
#include "myStrinG.h"
#include <cstring>

myStrinG::myStrinG()
{
	size = 80;
	line = new char[size + 1];
	line[size] = '\0';
	countString++;

}

myStrinG::myStrinG(int size)
{
	this->size = size;
	line = new char[size + 1];
	line[size] = '\0';
	countString++;
}

myStrinG::myStrinG(char* userStr, int size)
{
	this->size = size;
	line = new char[this->size + 1];
	strcpy_s(line, this->size + 1, userStr);
	line[this->size] = '\0';
	countString++;
}



//////


void myStrinG::setLine(const char* newLine)
{
	strcpy_s(line, strlen(newLine) + 1, newLine);
}

void myStrinG::setSize(const char* newLine) {

	size = strlen(newLine) + 1;
}

char* myStrinG::getLine()
{
	return line;
}

int myStrinG::getSize()
{
	return this->size;
}
/////////


void myStrinG::input()
{
	const int MAXSIZE = 1000;
	char* newStr = new char[MAXSIZE];

	std::cout << "Enter string: ";
	std::cin.getline(newStr, MAXSIZE + 1);

	if (line != nullptr) {
		setLine(newStr);
	}
	
	if (size <= 0) {
		setSize(newStr);
	}
	

}

void myStrinG::output()
{
	
	std::cout << line;
	std::cout << std::endl;


}

myStrinG::~myStrinG()
{
	if (line != nullptr) {
		delete[] line;
	}
}

