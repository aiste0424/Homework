#include <iostream>
#include <string>

using namespace std;

int main() {

	//Create a function that prints out square of number.

	void square(int y);
	int n;

	cout << "Type in a number and I'll square it up for you" << endl;
	cin >> n;

	int a = (int)n;

	square(a);

	system("pause");
	return 0;
}
void square(int y) {

	y = y * y;
	cout << y << endl;


}