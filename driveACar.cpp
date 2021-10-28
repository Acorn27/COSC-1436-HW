/*
Tarrant County college
COSC-1426
Professor Keith Smelser
Mai Tran
Asignment 02, Week 10
*/

#include <iostream>
#include <iomanip>
using namespace std;

void displayKey();
void displayCar();
void displayEngine();
void displayMirror();
void displayGPS();
void displayDestination();

const string MY_CAR = "Toyota Camry";
void parked(string);

int main() {
	
	// display step 1
	displayKey();
	displayCar();
	displayEngine();
	displayMirror();
	displayGPS();
	displayDestination();
	
	// display step 2
	parked(MY_CAR);
	
	// return 0
	return 0;
}

void displayEngine() {
	cout << "Start your engine.\n";
}

void displayKey() {
	cout << "Find your key.\n";
}

void displayGPS() {
	cout << "Activate your GPS.\n";
}

void displayDestination() {
	cout << "Drive to your Destination.\n";
}

void displayMirror() {
		cout << "Buckle up and adjust seat and mirror.\n";
}

void displayCar() {
	cout << "Get inside the car.\n";
}

void parked(string var) {
	cout << "My " << var << " is now parked.\n";
}
