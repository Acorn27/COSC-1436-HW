/*
This prgram let user enter 10 value for and array,
Then it will find out the smalllest and largest value
of an array
*/

#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 10;

int main() {
		
	int listOfNUmber[SIZE];
	
	void getValue(int[], int);
	int findLargest (const int[]);
	int findSmallest(const int[]);
	
	
	getValue(listOfNUmber, SIZE);
	
	int smallest, largest;
	smallest = findSmallest(listOfNUmber);
	largest = findLargest(listOfNUmber);
	
	cout << endl;
	cout << "The smallest number in the list is: " << smallest << endl;
	cout << "The largest number in the list is: " << largest << endl;
	
	cout << "\nDone!\n";
	return 0;
}

void getValue(int array[], int SIZE) {
	cout << "\nEnter 10 number and we will find the min and max.\n";
	for (int count = 0; count < SIZE; count++ ) {
		cout << "Enter number " << count + 1 << ": ";
		cin >> array[count];
	}
}

int findLargest(const int array[]) {
	int largest = array[0];
	for (int count = 1; count < 10; count++) {
		largest < array[count] ? largest = array[count] : largest = largest;
	}
	return (largest);
}

int findSmallest(const int array[]) {
	int smallest = array[0];
	for (int count = 1; count < 10; count++) {
		smallest > array[count] ? smallest = array[count] : smallest = smallest;
	}
	return (smallest);
}
