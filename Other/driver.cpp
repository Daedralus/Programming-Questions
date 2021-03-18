#include<bits/stdc++.h> 
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;


int main()
{
	double capacity;
	float leak;
	double miles;
	cin >> capacity >> leak >> miles;
	
	double speed;
	double eff;
	
	float totalLeak = 0;	
	float hoursNeeded = 0;
	float fuelBurn = 0;
	
	int best = 0;
	
	for(int i = 0; i < 6; i++){
		cin >> speed >> eff;
		hoursNeeded = miles / speed; //Hours to get to destination with given speed
		totalLeak = hoursNeeded * leak; //The amount of leakage due to time
		fuelBurn = (capacity-totalLeak) * eff; //The amount of miles the vehicle can go with left capacity
		
		
		cout << "Miles: " << miles << " Speed: " << speed <<  " Hours Need: " << hoursNeeded << " Leak: " << totalLeak << endl;
		
		if(fuelBurn > miles){
			best = speed;
		}
	}
	
	if(best > 0)
		cout << "YES " << best << endl;
	else
		cout << "NO" << endl;
		return 0;
}