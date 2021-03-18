#include <iostream>
#include <math.h>



using namespace std;



int main()
{
	int h, v;
	double degree, d, ladder;
	cin >> h >> v;
	
	degree = v * M_PI / 180;
	d = sin(degree);
	 
	ladder = ceil(h / d);
	cout << ladder;
	return 0;
}

