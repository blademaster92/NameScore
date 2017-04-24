#include <iostream>
#include <fstream>
#include <string>
#include <array>
#include <vector>
using namespace std; 

int main() {
	vector<string> names;
	string line;
	ifstream namesFile;
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

	sort(names.begin(), names.end());
	for (int i = 0; i < names.size(); i++) {
		cout << i << ". " << names[i] << endl;
	}

	system("pause");
	return 0;
}
	