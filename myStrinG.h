#pragma once
class myStrinG
{
	char* line;
	int size;
	static int countString;

public:

	myStrinG();
	myStrinG(int size);
	myStrinG(char* userStr,int size);
	myStrinG(const myStrinG& object);

	void setLine(const char* newLine);
	void setSize(const char* newLine);
	
	char* getLine();
	int getSize();


	int searchCh(char usCh);// поиск символа,возврат - индекс
	void myDelChar(char ch);//Удаление симв.

	int myStrLen();//длина строки
	void myStrCopy(char* usStr,int size);//strcpy_s
	bool myStrStr(const char* str);//поиск подстроки в строке
	char* myCharUper(const char* str);

	void myStrConcat(const myStrinG first,const myStrinG second);// конкатенация строк
	int myStrCmp(const myStrinG& object);

	static int getCountStr() {
		return countString;
	}
	

	void input();
	void output();

	

	~myStrinG();

};

