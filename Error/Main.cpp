#include <iostream>
#include <string>

using namespace std;

int main() {

	//Create a function that displays an error message and sends you back to the start.
	int a;
	void error();

	cout << "Type in a number that's not 5 " << endl;
	cin >> a;

	if (a != 5) cout << "Thank you for following the rules, the number is not 5" << endl;
	else {
		while (a == 5) {
			error();
			cin >> a;
			if (a != 5) cout << "Thank you for following the rules, the number is not 5" << endl;
		}
	}


	system("pause");
	return 0;

}

void error() {

	cout << "BEEP, BEEP, THERE'S AN ERROR" << endl;
}