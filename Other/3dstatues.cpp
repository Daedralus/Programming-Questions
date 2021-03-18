#include <iostream>
#include <math.h>

using namespace std;


int main()
{
    int s;
	int days = 1;
	int printers = 1;
	
	cin >> s;
	while(printers < s){
		days++;
		printers *= 2;
	}
	cout << days << endl;
    return 0;
}