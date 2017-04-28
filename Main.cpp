#include <iostream>
#include <fstream>
#include <string>
#include <array>
#include <vector>
#include "nameScore.h"
using namespace std;

int main() {
	vector<string> names;
	string line;
	ifstream namesFile;
	nameScore *list;
	namesFile.open("names.txt");

	if (namesFile.is_open()) {
		while (!namesFile.eof()) {
			getline(namesFile, line);
			names.push_back(line);

		}
		namesFile.close();

	}
	else {
		cout << "Unable to open file" << endl;

	}

	list = new nameScore[names.size()];
	sort(names.begin(), names.end());
	
	double total = 0;

	for (int i = 0; i < names.size(); i++) {
		list[i] = nameScore(names[i], i);
		//cout << list[i].getPos() << ". " << list[i].getName() << endl;
		total = total + (list[i].getSum() * list[i].getPos());
		// Note: You could also just use i instead of the getPos() method in the line above

	}

	cout << "The sum total of the name-score is: " << total << "." << endl;

	delete[] list;
	list = nullptr;
	system("pause");
	return 0;
}