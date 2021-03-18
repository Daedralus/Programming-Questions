#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>



using namespace std;



int main()
{
	int periods;
	double quality, years;
	double QALY = 0;
	cin >> periods;
	int i;
	for(i = 0; i < periods; i++){
		cin >> quality >> years;
		QALY += quality * years;
	}
	cout << fixed;
	cout << setprecision(3);
	cout << QALY << endl;
	return 0;
}

