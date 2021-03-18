#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>



using namespace std;



int main()
{
	int h, m;
	int reset = 60;
	cin >> h >> m;
	
	m -= 45;
	if(m < 0){
		m += reset;
		h--;
	}	
	if(h < 0){
		h = 23;
	}
	
	cout << h << " " << m;
	return 0;
}

