#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

int main(){
    
	double price;
	float cost = 0;
	int lawns;
	double length, width;
	double area;
	
	cin >> price >> lawns;
	
	for(int i = 0; i < lawns; i++){
		cin >> width >> length;
		area = width * length;
		cost += area * price;
	}
	cout << fixed << setprecision(7) << cost << endl;
	return 0;
}