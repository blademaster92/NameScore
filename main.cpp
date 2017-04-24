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
	for (int i = 0; i < names.size(); i++) {
		//cout << i << ". " << names[i] << endl;
		list[i] = nameScore(names[i], i);
		cout << list[i].getPos() << ". " << list[i].getName() << endl; //reading name and position from nameScore class array
	}

	delete[] list;
	list = nullptr;
	system("pause");
	return 0;
}
	