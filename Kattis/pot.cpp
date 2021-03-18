#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	int x, power, p;
	int sum = 0;
	while(cin >> x){
		power = x % 10;
		x = (x - power) / 10;
		p = pow(x,power);
		sum += p;
	}
	cout << sum;
	return 0;
}

