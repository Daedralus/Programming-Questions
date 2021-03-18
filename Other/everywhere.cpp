#include<bits/stdc++.h> 
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;


int main()
{
	int trips = 0;	
	int cities = 0;
	int uniqueCount = 0;
	string city;
	vector<string> v;
	cin >> trips;
	
	int arr [trips-1];
	
	for(int i = 0; i < trips; i++){
		cin >> cities;
		for(int y = 0; y < cities; y++){
			cin >> city;
			v.push_back(city);
		}
		sort(v.begin(), v.end());
		uniqueCount = unique(v.begin(), v.end()) - v.begin();	
		arr[i] = uniqueCount;
		v.clear();
		uniqueCount = 0;
	}
	for(int i = 0; i < trips; i++){		
		cout << arr[i] << endl;
	}
	return 0;
}