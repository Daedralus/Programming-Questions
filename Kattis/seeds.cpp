#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>



using namespace std;



int main()
{
	double cost, lawns, height, width, area = 0, sum;
	cin >> cost >> lawns;
	int i;

	for(i = 0; i < lawns; i++){
		cin >> width >> height;
		area += width * height;
	}
	sum = cost * area;
	cout << fixed;
	cout << setprecision(7);
	cout << sum;
	return 0;
}

