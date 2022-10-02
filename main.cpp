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
	for (currRow = 1; currRow <= numRows; ++currRow) {
		for (currCol = 1; currCol <= numCols; ++currCol) {
			cout << currRowLetter << currCol << " ";
		}
		cout << endl;
		++currRowLetter;
	}

	return 0;
}