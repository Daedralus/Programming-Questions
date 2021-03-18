#include<bits/stdc++.h> 
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;


int main()
{
    int corners;
	int edges;
	int centers;
	int sides;
	int h, w;
	int ih, iw;
	
	int tempe;
	double tempd;
	cin >> corners >> edges >> centers;
	sides = corners + edges;
	if(corners != 4){
		cout << "impossible\n";
		return 0;
	}
	if((edges % 2) != 0){
		cout << "impossible\n";
		return 0;
	}

	for(int i = 2; i <= (sides / 2); i++){
		h = i;
		w = ((sides - h*2) / 2)+2;
	
		if(centers == (h-2) * (w-2)){
			cout << w << " " << h << endl;
			return 0;
		}
	}
			
	cout << "impossible\n";
	return 0;
}