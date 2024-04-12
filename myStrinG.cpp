#include <iostream>
#include "myStrinG.h"
#include <cstring>

//конструкторы

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
///////


myStrinG::myStrinG(const myStrinG& object) //конструктор копирования
{
	this -> size = object.size;
	this->line = new char[size+1];
	for (int i = 0; i < this->size;i++) {
		this->line[i] = object.line[i];
		if (object.line[i] == '\0') {
			this->line[i] = '\0';
			break;
		}
	}

}



//////  SET\GET


void myStrinG::setLine(const char* newLine)//S
{
	strcpy_s(line, strlen(newLine) + 1, newLine);
}

void myStrinG::setSize(const char* newLine) {//S

	size = strlen(newLine) + 1;
}


char* myStrinG::getLine()//G
{
	return line;
}

int myStrinG::getSize()//G
{
	return this->size;
}

///  METOD'S
int myStrinG::searchCh(char usCh) 
{
	int index = -1; 
	for (int i = 0; i < this->size; i++) {
		if (line[i] == usCh) {
			index = i;
			
		}
	}
	return index;
	
}


 
int myStrinG::myStrLen() 
{
	int i = 0;
	while (line[i] != '\0') {
		i++;
	}
	return i;
}


void myStrinG::myStrCopy(char* userStr, int size) 
{
	this->line = new char[size]; 

	for (int i = 0; i < size; i++) {

		this->line[i] = userStr[i];
		if (userStr[i] == '\0') {
			this->line[i] = '\0';
			break;
		}
	}

	
}


bool myStrinG::myStrStr(const char* str) // podstrokaVStrpke
{
	
	int strSize = strlen(str); //длина искомой строки

	for (int i = 0; i < this->size; i++) {

		int j = 0;//иниц. j для проверки

		if (this->line[i] == str[0]) { //поиск по строке 0 симв подстроки

			for (; j < strSize; j++) {//прохожу
				if (this->line[i + j] != str[j]) { //сама проверка
					break;
				}
			}
		}

		if (j == strSize) { //если прошло проверку и дошло без брейка
			return true;
		}

	}

	
	return false;
}

char* myStrinG::myCharUper(const char* str)
{
	const int upperAcode = 65;
	const int upperZcode = 90;

	const int lowerAcode = 97;
	const int lowerZcode = 122;

	int size = strlen(str);
	char* upperLine = new char[size + 1];
	for (int i = 0; i < size; i++) {
		if (str[i] >= upperAcode && str[i] <= upperZcode) {
			upperLine[i] = str[i];
		}
		else if (str[i] >= lowerAcode && str[i] <= lowerZcode) {
			upperLine[i] = str[i] - 32;
		}
		else if (str[i] == '\0') {
			upperLine[i] = '\0';
			break;
		}
	}

	return upperLine;
}


void myStrinG::myStrConcat(const myStrinG first, const myStrinG second)
{
	int newLineSize = (first.size + second.size) + 1; //разм.новой строки

	this->line = new char[newLineSize];
	int index = 0;

	for(int i =0;i<first.size;i++){ //копирование из первой строки
		this->line[index] = first.line[i];
		index++;
	}

	for (int i = index; i < newLineSize; i++) { //из второй с index-итерации
		this->line[index] = second.line[i];
		index++;
	}

	this->line[index] = '\0';

}

int myStrinG::myStrCmp(const myStrinG& object) {

	char* firstUpperLine = myCharUper(this->line);
	char* secUpperLine = myCharUper(object.line);

	int minLengt = this->size;
	if (object.size < minLengt) {
		minLengt = object.size;
	}
		
	for (int i = 0; i < minLengt; i++) {
		if (firstUpperLine[i] < secUpperLine[i]) { //первая строка меньше чем вторая
		return -1;
		}
		if (firstUpperLine[i] > secUpperLine[i]) { //первая строка больше чем вторая
			return 1;
		}
	}

	if (this->size < object.size) { //1- меньше
		return -1;
	}

	if (this->size > object.size) { //1 больше
		return 1;
	}	

	return 0;



}



void myStrinG::myDelChar(char ch)
	
{
	int index = 0;

	int size = this->myStrLen();
	char* newLine = new char[size];

	for (int i = 0; i < size; i++) {

		if (this->line[i] != ch) {
			newLine[index] = this->line[i];
			index++;
			
		}
		
	}

	newLine[index] = '\0';

	if (index == size) { 
		delete[] newLine; //чищу память пустой строки
		
	}

	else {
		delete [] this->line;
		this->line = newLine;

	}

}
/////////


void myStrinG::input()
{
	const int MAXSIZE = 1000;
	char* newStr = new char[MAXSIZE];

	std::cout << "Enter string: ";
	std::cin.getline(newStr, MAXSIZE + 1);

	
	setLine(newStr);
	setSize(newStr);
	
	
	delete[] newStr;

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

