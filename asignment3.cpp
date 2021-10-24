/*
Tarrant County College
COSC-1436
Professor Keith Smelser
Mai Tran
Asignment 3, Week 10
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main() {

	// varible
	const string FILE_NAME = "StudentData.txt";
	string dataLine;

	// open outputfile
	ofstream outputFile;
	outputFile.open(FILE_NAME);

	// Prompt for data and write to outputFile
	for (int count = 1; count <= 6; count++) {
		switch (count) {
			case 1:
				cout << "Full Name: ";
				break;
			case 2:
				cout << "Street 1: ";
				break;
			case 3:
				cout << "Street 2: ";
				break;
			case 4:
				cout << "City: ";
				break;
			case 5:
				cout << "State Code: ";
				break;
			case 6:
				cout << "Zip Code: ";
				break;
		}
		getline(cin, dataLine);
		outputFile << dataLine << endl;
	}

	// ouputFile close
	outputFile.close();

	// Create inputFile to double check
	ifstream inputFile;
	inputFile.open(FILE_NAME);

	// input Stream varibale
	string dataLine2;

	// read data from inputFile
	if (inputFile) {
		cout << "\nFile opened successfully.\n";
		while (getline(inputFile, dataLine2)) {
			cout << dataLine2 << endl;
		}
	} else {
		cout << "\nError opening " << FILE_NAME << endl;
	}

	// inputFile close
	inputFile.close();

	// Terminate program
	return 0;
}