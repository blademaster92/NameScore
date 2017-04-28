#include <iostream>
#include "NameScore.h"
#include <string>
using namespace std;

nameScore::nameScore() {
	_nameText = "blah";
	_pos = 0;
	setSum();
}

nameScore::nameScore(string nameText, int pos) {
	_nameText = nameText;
	_pos = pos;
	setSum();
}

void nameScore::setName(string nameText) {
	_nameText = nameText;
}

string nameScore::getName() {
	return _nameText;
}

void nameScore::setSum()
{
	int num = 0;
	for (int j = 0; j < _nameText.length(); ++j) {
		if (!isspace(_nameText[j])) {
			num = (int)(toupper(_nameText[j]) - 'A' + 1);
		}
		_sum += num;
	}
	//cout << _pos << ": " << _nameText << " " << _sum << " = " << (_sum*_pos) << endl;
	//uncomment above line to see list of all names + each of their sums and final scores
}

int nameScore::getSum() {
	return _sum;
}

int nameScore::getPos()
{
	return _pos;
}
