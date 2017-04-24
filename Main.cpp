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


	int num = 0;
	int sum = 0;
	double total = 0;
	for (int i = 0; i < names.size();) {
		string *name = &names[i];
		string c_name = *name;
		i++;
		//cout << c_name << endl;
		for (int j = 0; j < c_name.size(); ++j) {
			if (!isspace(c_name[j])) {
				num = (int)(toupper(c_name[j]) - 'A' + 1);
			}
			sum += num;
		}
		total = total + (sum * i);
		//cout << c_name << endl;
	}

	cout << "The sum total of the name-score is: " << total << endl;


	system("pause");
	return 0;
}
	