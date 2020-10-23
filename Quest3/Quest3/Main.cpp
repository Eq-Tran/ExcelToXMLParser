#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {


	ifstream inputFile;
	string fileName = "testData.txt";

	// Column names (comma separated)
	string line;
	string id;
	string name;
	string lvl;
	string health;
	string gold;

	vector<string> fileData{};


	inputFile.open("C:\\Users\\Eqtra\\OneDrive - New England Institute of Technology\\Fall Term\\Advanced Algorithms and Api\\W3\\Quest3\\Quest3\\testData.txt");
	while (getline(inputFile, line)) {

		if (inputFile.is_open()) {

			cout << line << endl;
			fileData.push_back(line);
			
		}
		else {
			cout << "File could not be read" << endl;
		}
	}

	cout << "Output for testing....." << "\n";

	for (size_t i = 0; i < fileData.size(); i++) {
		cout << fileData[i].data() << endl;
		
		cout << &fileData << endl;
	}



	return 0;
}