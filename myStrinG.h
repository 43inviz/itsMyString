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

	void setLine(const char* newLine);
	void setSize(const char* newLine);
	
	char* getLine();
	int getSize();

	static int getCountStr() {
		return countString;
	}
	

	void input();
	void output();

	

	~myStrinG();

};

