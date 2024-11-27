#include <iostream>

using namespace std;

class User {
	string name;
	string surname;
	int age;


public:
	static int amountOfUsers;
	User() {
		IncrementAmountOfUsers(1);
	}

	static void IncrementAmountOfUsers(int x) {
		amountOfUsers += x;
	}
	
};


int User::amountOfUsers = 0;

int main() {
	User obj;
	cout << User::amountOfUsers << endl;
	User obj1;
	cout << User::amountOfUsers << endl;
	User obj2;
	cout << User::amountOfUsers << endl;
}