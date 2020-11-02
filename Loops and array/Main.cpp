#include <iostream>
#include <string>



const int TOTAL = 10;

int main()
{
	using namespace std;

	int numbers[TOTAL] = { 78, 42, 7, 8, 15, 2, 83, 64, 23, 13 };

	//use a for loop to display the array and whether it's even or odd

	for (int i = 0; i < 10; i++) {

		if (numbers[i] % 2 == 0) cout << numbers[i] << " is even" << endl;
		else cout << numbers[i] << " is odd" << endl;

	}



	cout << "\n\n========================================\n\n";

	//rewrite the for loop using a while loop

	int x = 0;

	while (x < TOTAL) {

		if (numbers[x] % 2 == 0) cout << numbers[x] << " is even" << endl;
		else cout << numbers[x] << " is odd" << endl;
		x++;

	}

	cout << "\n\n==================================\n\n";

	//rewrite the loop using a range-based for loop

	for (int i : numbers) {

		if (i % 2 == 0) cout << i << " is even" << endl;
		else cout << i << " is odd" << endl;

	}







	system("PAUSE");
	return 0;
}