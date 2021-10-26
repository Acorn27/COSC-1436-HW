/*
This prgram let user enter 10 value for and array,
Then it will find out the smalllest and largest value
of an array
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// Create an local array, a constant for array size
	const int SIZE = 10;
	int listOfNUmber[SIZE];
	
	//prototype 2 function to find the smallest and largest value
	void getValue(int &[], int);
	int findLargest(int []);
	int findSmallest(int []);
	
	// Let user enter value for array using control structure. We don't care about subcription
	getValue(listOfNUmber, SIZE);
	
	// find largest and smalles value
	int smallest, largest;
	smallest = findSmallest(listOfNUmber);
	largest = findLargest(listOfNUmber);
	
	// display output
	cout << endl;
	cout << "The smallest number in the list is: " << smallest << endl;
	cout << "The largest number in the list is: " << largest << endl;
	
	// terminate program
	cout << "\nDone!\n";
	return 0;
}

void getValue(int &array[], int SIZE) {
	cout << "Enter 10 number and we will find the min and max.\n";
	for (int count = 0; count < SIZE; count++ ) {
		cout << "Enter number " << count + 1 << ": ";
		cin >> array[count];
	}
}

int findLargest(int array[]) {
	int largest = array[0];
	for (int value : array) {
		(largest < number ? largest = number : );
	}
}

int findSmallest(int array[]) {
	int smallest = array[0];
	for (int value : array) {
		(smallest > number ? smallest = number :);
	}
}
