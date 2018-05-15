/* CREATOR:
Brittany Clarke
Bgc77987@uga.edu
University of Georgia - Class of 2019. 
Computer Science student.
*/

//Driver/main class

#include "Sudoku.h"
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));
	string input;
	int num, row, col, row1, col1;
	Sudoku sud;
	//fill the board with random numbers in random locations
	sud.fillBoard((rand() % 9+1), (rand() % 9), (rand() % 9));
	//Print the board
	sud.printBoard();
	num = 0;
	row = 0;
	col = 0;
	col1 = 0;
	row1 = 0;
	//Create endless loop so the user can play as long as they'd like
	//Can escape by pressing "q" for quit
	while (2 > 1) {
		string get = "get";
		cout << "To quit, enter q, then hit enter." << endl << endl;
		cout << "To place a number on the board: Enter number row and column." << endl;
		cout << "Separate each by one space." << endl << endl;
		cout << "If you'd like to get a cell value, enter 'get'" << endl;
		getline(cin, input);
		if (input == "q") {
			break;
		}
		if (input != get) {
			stringstream ss(input);
			while (ss) {
				ss >> num;
				ss >> row;
				ss >> col;
			}
			if (num <= 9 && num > 0 && row >= 0 && col >= 0 && row < 9 && col < 9) {
				sud.placeNum(num, row, col);
				sud.printBoard();
			}
			else {
				cout << "Please enter a valid number." << endl << endl << endl;
			}
		}
		if (input == "get") {
			cout << "Input the row." << endl;
			cin >> row1;
			cout << "Input the column." << endl;
			cin >> col1;
			cout << "The value at row " << row1 << ", " << "column " << col1 << " " << "is ";
			if (row1 >= 0 && col1 >= 0 && row1 < 9 && col1 < 9) {
				sud.printCellValue(row1, col1);
				cout << endl << endl << endl;
			}
			else {
				cout << "Please enter valid numbers." << endl;
			}
		}
	}
}
