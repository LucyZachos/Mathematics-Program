#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	// Declare a variables to hold the user's menu selections.
	string confirmationMenu;
	string yes = "y", no = "n";

	char operatorSym;

	// Declare variables to hold user's input
	float numberOne, numberTwo;

		do {
		// Display the main screen.
			cout << " **************************************\n";
			cout << "       Mathematics Program" << endl;
			cout << " **************************************\n";
			cout << "Please enter the symbol you would like to use in your equation.  (+ - / * )\n";
			cin >> operatorSym;
			cout << "Please enter your first number\n";
			cin >> numberOne;
			cout << "Please enter your second number\n";
			cin >> numberTwo;

			//switch case based on the mathematical symbol the user has selected
			switch (operatorSym) {
			case '+':
				cout << "Your calculation is: " << numberOne << " + " << numberTwo << " = " << numberOne + numberTwo;
				break;

			case '-':
				cout << "Your calculation is: " << numberOne << " - " << numberTwo << " = " << numberOne - numberTwo;
				break;

			case '*':
				cout << "Your calculation is: " << numberOne << " * " << numberTwo << " = " << numberOne * numberTwo;
				break;

				//Prevents division by zero
			case '/':
				if (numberTwo == 0) {
					cout << "Error. Cannot divide by zero.\n";
					cout << "Please start again.\n";
				}
				else {
					cout << "Your calculation is: " << numberOne << " / " << numberTwo << " = " << numberOne / numberTwo;
				}
				break;
			default:

				// If the operator is other than +, -, * or /, error message is shown
				cout << "Error! operator is not correct";
				break;
			}cout << endl;
			cout << "Would you like to perform another calculation?\n";
			cout << "To perform another calculation, (Y)es or (N)o\n";
			cin >> confirmationMenu;
		} while (confirmationMenu == "y");
		exit(0);
}

