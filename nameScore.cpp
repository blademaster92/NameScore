#include <iostream>
#include "NameScore.h"
#include <string>
using namespace std;

nameScore::nameScore() {
	_nameText = "blah";
	_finalScore = 0;
	_sum = 0;
	_pos = 0;
}

nameScore::nameScore(string nameText, int pos) {
	_nameText = nameText;
	_finalScore = 0;
	_sum = 0;
	_pos = pos;
}

void nameScore::setName(string nameText) {
	_nameText = nameText;
}

string nameScore::getName() {
	return _nameText;
}

int nameScore::getFinalScore() {
	return _finalScore;
}

int nameScore::getSum() {
	setSum();
	return _sum;
}

void nameScore::setSum() {
	string name = this->getName();
	int sum = 0;
	char base = ' ';
	char lowBase = '`';
	char upperBase = '@';
	for (int i = 0; i < name.length(); i++) {
		if (name[i] >= 'A' && name[i] <= 'Z') {
			base = upperBase;
		}
		else if (name[i] >= 'z' && name[i] <= 'z') {
			base = lowBase;
		}
		int value = name[i] - base;
		sum += value;
	}	_sum = sum;
}

int nameScore::getPos()
{
	return _pos;
}
