#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	int x, y;
	cin >> x;
	for(int i = 0; i < x; i++){
		cin >> y;
		if(y % 2 == 0)
			cout << y << " is even\n";
		else
			cout << y << " is odd\n";
	}
	return 0;
}

