/*
Tarrant County College
COSC-1436
Professor Keith Smelser
Mai Tran
Asignment 2 week 12: Report a Train Route Profit
*/

#include <iostream>
using namespace std;

const int TICKET_PRICE = 50,
          MAX_SEATS_CAPACITY = 100;


int calcProfit(const int seatsSold, const bool freeDrinks = false) {
	
	// Create a local int variable named profitLoss
  // Create a local int variable named baseCost
	int profitLoss, baseCost;
	
	// If freeDrinks is true - assign baseCost to 1200. Otherwise, assign 800 to the baseCost
	if (freeDrinks) {
		baseCost = 1200;
	} else {
		baseCost = 800;
	}
	// Calculate profitLoss as (seatsSold * 50  ) - base cost
	profitLoss = (seatsSold * TICKET_PRICE) - baseCost;
	
	// Return the calculated profitLoss.
	return (profitLoss);
}

int main() {
	
	cout << boolalpha;
	
	// Create an int variable named theSeatsSold
	// and input validation: only acept integer no greater than 100
	int seatsSold;
	do {
		cout << "Enter number of seats sold: ";
		if (!(cin >> seatsSold)) {
			cout << "Please enter number only.\n";
			cin.clear();
			cin.ignore(1000, '\n');
		} else if (seatsSold > MAX_SEATS_CAPACITY) {
			cout << "Seats sold can not excess 100.\n";
		} else {
			break;
		}
	} while (true);
	
	cout << endl;
	// Call the calcProfit method passing only the seatsSold and display the returned result
	cout << "Train routes profit without free drink: " << calcProfit(seatsSold) << endl;
	// Call the calcProfit method passing the seatsSold and true as  the 2nd parameter and display the results
	cout << "Train routes profit with free drink: " << calcProfit(seatsSold, true) << endl;
	
	// Notify and terminate program
	cout << "\nDone.\n";
	return 0;
}
