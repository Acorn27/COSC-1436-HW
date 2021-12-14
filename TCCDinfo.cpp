/*
Tarrant County College
COSC-1436
Professor keith Smeler
Mai Tran
Asignment 3, Week 12: TCCD info
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// step 1
string returnLocation(const string campusCode) {

	string campusLocation;

	if (campusCode == "NE") {
		campusLocation = "Hurst, Texas.";
	}
	else if (campusCode == "SE") {
		campusLocation = "Arlington, Texas.";
	}
	else if (campusCode == "NW" || campusCode == "TR" || campusCode == "SO") {
		campusLocation = "Fort Worth, Texas.";
	}
	else if (campusCode == "CN") {
		campusLocation = "the Internet.";
	}
	else {
		campusLocation = "Unknown location due to invalid Campus Code.";
	}

	return (campusLocation);
}
// step 2
string returnLocation() {

	string campusLocation;

	campusLocation = returnLocation("SE");

	return (campusLocation);
}

// I created this method to make code look cleaner and nicer
// althouth this is not reuqired.

void displayMenu() {
	cout << endl;
	cout << "                    Menu                     " << endl;
	cout << "---------------------------------------------" << endl;
	cout << "Campus Code" << "\t\t\t" << "Campus" << endl;
	cout << "---------------------------------------------" << endl;
	cout << "NE" << "\t\t\t" << "TCC Northeast Campus" << endl;
	cout << "NW" << "\t\t\t" << "TCC Northwest Campus" << endl;
	cout << "SE" << "\t\t\t" << "TCC Southeast Campus" << endl;
	cout << "TR" << "\t\t\t" << "TCC Trinity River Campus" << endl;
	cout << "SO" << "\t\t\t" << "TCC South Campus" << endl;
	cout << "CN" << "\t\t\t" << "TCC Connect Campus" << endl;
	cout << "X" << "\t\t\t" << "Exit" << endl;
	cout << endl;
}

//step 3
void displayInfo() {

	string campusCode;
	string campusLocation;

	do {
		displayMenu();
		cout << "Enter campus code: ";
		getline(cin, campusCode);

		if (campusCode == "X") {
			continue;
		}
		else {
			campusLocation = returnLocation(campusCode);
			cout << "The Campus Code " << campusCode << " is located in " << campusLocation << endl;
		}
	} while (campusCode != "X");
	
	// step 4
	campusLocation = returnLocation();
	// step 5
	cout << "\nI hope this information was helpful. I am presuming you are currently located in " << campusLocation << ".\n";
}

// step 6
int main() {

	displayInfo();

	cout << "\nDone!\n";
	return 0;
}
