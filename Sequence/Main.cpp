#include <iostream>
#include <string>

using namespace std;

int main() {
	int x;
	void function(int y);
	int a;
	cout << "Type in a number and I'll square up that big of a sequence for you" << endl;
	cin >> a;
	x = (int)a;

	function(x);

	system("pause");
	return 0;

}

void function(int y) {

	for (int i = 1; i <= y; i++) {

		cout << i * i << endl;


	}

}