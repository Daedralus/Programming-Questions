#include <iostream>
#include <math.h>
#include <string>



using namespace std;



int main()
{
	int x,n,p,i;
	cin >> x >> n;
	int total = 0;
	for (i = 0; i < n; i++){
		cin >> p;
		total += x - p;
	}
	total += x;
	cout << total << endl;
}

