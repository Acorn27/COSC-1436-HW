/*
Tarrant County College
COSC 1436
Professor Keith Smelser
Mai Tran
Asignment 2, week 10
*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {

	// Variable
	const string FILE_NAME = "Week10a.dat";
	double number, total = 0;

	// Open a file to read data
	ifstream inputFile;
	inputFile.open(FILE_NAME);

	// while loop to read all data in file and accumualate total
	while (inputFile >> number) {
		total += number;
	}

	// close a file
	inputFile.close();

	// Display total
	cout << "The current balance is " << total << endl;

	// Terminate program
	return 0;
}



