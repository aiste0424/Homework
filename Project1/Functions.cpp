#include <iostream>
#include <string>

using namespace std;

int main() {
	
	void direction(int y);

	//sea, sky, spaceship, forest, dungeon
	int here = 0;
	direction(here);
	

	
		
	system("pause");
	return 0;

}
int checking(int x) {

	while (!cin) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "That's not an integer, please try again" << endl;
		cin >> x;
		
	}
	return x;
}

void direction(int y) {
	void sky();
	void sea();
	void spaceship();
	void forest();
	void dungeon();
	int checking(int x);
	int a;
	
	cout << "Where do you want to go? 1 for sea, 2 for sky, 3 for spaceship, 4 for forest, 5 for dungeon\n" << endl;
	cin >> a;
	checking(a);

	


	
	while ((a>5)||(a<1)) {
		cout << "That's not an option, please try again" << endl;
		cin >> a;
		checking(a);
		

	}
	
	

	while (a == y) {
		cout << "You're already here, go somewhere else, shoo\n" << endl;
		cin >> a;
		checking(a);
	}

	if (a == 1) sea();
	else if (a == 2) sky();
	else if (a == 3) spaceship();
	else if (a == 4) forest();
	else if (a == 5) dungeon();

	

}



void sea() {
	
	cout << "You're next to the sea. Be careful, the waters can be treacherous at times!\n" << endl;
	int here = 1;
	direction(here);

}

void sky() {
	cout << "You're in the sky. How does it feel to fly?\n" << endl;
	int here = 2;
	direction(here);

}



void spaceship() {
	
	cout << "You're in the spaceship\n" << endl;
	int here = 3;
	direction(here);

}


void forest() {

	cout << "You're in the forest\n" << endl;
	int here = 4;
	direction(here);

}

void dungeon() {

	cout << "You're in the dungeon\n" << endl;
	int here = 5;
	direction(here);
}