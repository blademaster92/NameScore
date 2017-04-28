#ifndef NAMESCORE_H
#define NAMESCORE_H
#include<string>
#include<iostream>
using namespace std;

class nameScore
{
public:
	nameScore();
	nameScore(string nameText, int pos);
	void setName(string nameText);
	string getName();
	int getSum();
	void setSum();
	int getPos();

private:
	string _nameText;
	int _pos;
	int _sum = 0;

};

#endif // !NAMESCORE_H
