#include<bits/stdc++.h> 
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;


int main()
{
    int n;
	int pinks = 0;
	string line;
	string pink = "pink";
	string rose = "rose";
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> line;
		//Lowercase string
		transform(line.begin(), line.end(), line.begin(), ::tolower);
		if(line.find(pink) != string::npos || line.find(rose) != string::npos){
			pinks++;
		}
	}
	if(pinks == 0){
		cout << "I must watch Star Wars with my daughter" << endl;
		return 0;
	}
	cout << pinks << endl;
	return 0;
}