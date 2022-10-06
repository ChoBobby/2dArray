#include<iostream>

using namespace std;

int main() {
	int numRows;
	int numCols;
	int currRow;
	int currCol;
	char currRowLetter;

	cout << "Rows: ";
	cin >> numRows;
	cout << "Columns: ";
	cin >> numCols;
	cout << endl;

	currRowLetter = 'A';
	if (numRows <= 26 && numRows >= 0 && numCols >= 0) {
		for (currRow = 1; currRow <= numRows; ++currRow) {
			for (currCol = 1; currCol <= numCols; ++currCol) {
				cout << currRowLetter << currCol << "   ";
			}
			cout << endl << endl;
			++currRowLetter;
		}
	}
	if (numRows < 0 || numRows > 26) {
		cout << "Error: Only 0-26 rows are allowed." << endl;
	}
	if (numCols < 0) {
		cout << "Error: Number of columns must be greater than 0." << endl;
	}

	return 0;
}