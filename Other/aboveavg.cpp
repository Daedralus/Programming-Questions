#include<bits/stdc++.h> 
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;


int main()
{
    double c, n, g;
	double above = 0;
	double sum;
	double avg;
	double percent;
	vector<int> grades;
	
	cin >> c;
	for(int i = 0; i < c; i++){
		cin >> n;
		above = 0;
		for(int y = 0; y < n; y++){
			cin >> g;
			grades.push_back(g);
		}
		sum = accumulate(grades.begin(), grades.end(), 0);
		avg = sum / n;
		for(int j = 0; j < n; j++){
			if(avg < grades[j]){
				above++;
			}
		}
		percent = (above * 100) / n;
		cout << fixed << setprecision(3) << percent << "%\n";
		grades.clear();
	}
	return 0;
}