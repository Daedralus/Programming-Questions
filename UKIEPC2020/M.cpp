#include<bits/stdc++.h> 
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;


int main()
{
    int days;
	vector<int> me;
	vector<int> first;
	vector<int> second;
	vector<int> ds;
	int temp;
	
	cin >> days;
	for(int i = 0; i < days; i++){
		cin >> temp;
		me.push_back(temp);
	}
	for(int i = 0; i < days; i++){
		cin >> temp;
		first.push_back(temp);
	}
	for(int i = 0; i < days; i++){
		cin >> temp;
		second.push_back(temp);
	}
	
	for(int i = 0; i < days; i++){
		ds.push_back(me[i]);
		ds.push_back(first[i]);
		ds.push_back(second[i]);
		sort(ds.begin(), ds.end());
		cout << ds[1] << " ";
		ds.clear();
	}
}