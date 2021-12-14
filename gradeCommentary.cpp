/*
Tarrant County College
COSC-1436
Professor Keith Smelser
Mai Tran
Asignment 3 week 11
*/

#include <iostream>
#include <iomanip>
using namespace std;

void displayComment(int);

int main() {
	// varibale to hold grade
	int grade;

	// prompt for user input
	cout << "Enter your grade(-10 to 110): ";
	cin >> grade;

	//display commentary
	displayComment(grade);

	// notify and terminate program
	cout << "Done.\n";
	return 0;
}

void displayComment(int grade) {
	if (grade < -10 || grade > 110) {
		cout << "Invalid Grade.\n";
		return;
	} else if (grade >= 90) {
		cout << "Good Job!\n";
	} else if (grade >= 70) {
		cout << "You may need to visit Lab\n";
	} else {
		cout << "Please ask for help..\n";
	}
}
