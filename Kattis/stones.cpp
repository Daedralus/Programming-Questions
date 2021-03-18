#include <iostream>

using namespace std;

int main()
{
	int turn;
	cin >> turn;

	if (turn % 2 == 0) {
		cout << "Bob";
		return 0;
	}
	else {
		cout << "Alice";
		return 0;
	}
}