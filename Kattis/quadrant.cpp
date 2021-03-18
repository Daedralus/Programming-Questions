#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	int x, y, out;
	cin >> x >> y;
	
	if(x > 0 && y > 0)
		out = 1;
	else if(x > 0 && y < 0)
		out = 4;
	else if(x < 0 && y < 0)
		out = 3;
	else
		out = 2;
	cout << out;
	return 0;
}

