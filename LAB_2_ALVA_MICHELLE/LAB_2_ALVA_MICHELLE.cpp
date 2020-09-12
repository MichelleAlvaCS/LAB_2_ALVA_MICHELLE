//LAB 2 ALVA, MICHELLE T TH
#include <iostream>
#include <iomanip>
using namespace std;

int GetChoice();

int main () {

	int userChoice = 0;


	do {

		userChoice = GetChoice();

		switch (userChoice) {

			case 1:
				cout << "*********Raises a number to the power" << endl;
				break;
			case 2:
				cout << "***********Produces the sum of the wquares for the n terms" << endl;
				break;
			case 3:
				cout << "***********Add the first n terms of the series " << endl;
				break;
			case 4:
				cout << "************Quit" << endl;
		}

} while (userChoice != 4);

	cout << "Thank you for using the menu. Have a good day" << endl;


	system("pause");
	return 0;

}

int GetChoice() {
	int choice = 0;

	cout << "\nPlease make a choice: \n"
		 << "1. Raise a number a power\n"
		 << "2. Produce the sum of the squares for the first n terms of a series\n"
		 << "3. Add the first n terms of a series\n"
		 << "4. Quit\n" << endl;

	cin >> setw(1) >> choice;

	while (!cin.good() || choice > 4 || choice < 1) {
		cin.clear();
		cin.ignore(INT_MAX, '\n');

		cout << "\nERROR: Faulty input. Please Try again.\n"
		 	 << "1. Raise a number a power\n"
			 << "2. Produce the sum of the squares for the first n terms of a series\n"
			 << "3. Add the first n terms of a series\n"
			 << "4. Quit\n" << endl;

		cin >> setw(1) >> choice;

	}

	cin.clear();
	cin.ignore(INT_MAX, '\n');

	return choice;

}