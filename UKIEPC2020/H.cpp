#include<bits/stdc++.h> 
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;


int main()
{
    int menus;
	int dishes;
	bool locked = false;
	int find;
	vector<string> rec;
	string food;
	cin >> menus;

	for(int i = 0; i < menus; i++){
		cin >> dishes;	
		for(int j = 0; j < dishes; j++){
				cin >> food;
				rec.push_back(food);
			}		
		if(!locked){
			cout << dishes << endl;
			for(int z = 0; z < dishes; z++){
				cout << rec[z] << endl;
			}
			locked = true;
		}
		rec.clear();
	}
	return 0;
}



