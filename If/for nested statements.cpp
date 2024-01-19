#include<iostream>
using namespace std;
int main() {

	char input;
	char input2;

	cout << "Do you like winter or summer? W/S" << endl;
	cin >> input;
	cout << "Do you like sports or relaxing? P/R" << endl;
	cin >> input2;

	if (input == 'W') {
		if (input2 == 'P')
			cout << "I suggest you try skiing!" << endl;
		else if (input2 == 'R')
			cout << "I suggest you try ice skating!" << endl;
	}
	else if (input == 'S')
		if (input2 == 'P')
			cout << "I suggest you try swimming!" << endl;
		else if (input2 == 'R')
			cout << "I suggest you try reading by the beach!" << endl;



	for (int i = 0; i < 4; ++i) {  #rows
		for (int j = 0; j < 8; ++j) { #columns
			cout << "*";
		}
		cout << endl;

	}
}
