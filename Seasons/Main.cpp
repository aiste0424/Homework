#include <iostream>
#include <string>

using namespace std;

int main() {

	//Create a function that asks for your month of birth
	//and determines if you’re a spring, summer, autumn, winter baby etc.

	int month1;
	void function(int y);

	cout << "Type in your birth month in numbers and I'll tell the season you were born in" << endl;
	cin >> month1;

	int month2 = (int)month1;

	function(month2);





	system("pause");
	return 0;
}

void function(int y) {

	if ((y > 2) && (y < 6)) cout << "You were born in spring";
	else if ((y > 5) && (y < 9)) cout << "You were born in summer";
	else if ((y > 8) && (y < 12)) cout << "You were born in autumn";
	else cout << "You were born in winter";




}