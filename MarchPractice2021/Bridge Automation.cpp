#include<bits/stdc++.h> 
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;


int main()
{
	int n, a;
	cin >> n;
	//Time is 60 by default as an opening will occur (closing calculated later)
	int time = 0;
	int max = 1800; //30minutes
	bool proceed = true;
	
	vector<int> boats;
	
	for(int i = 0; i < n; i++){
		cin >> a;
		boats.push_back(a);
	}
	
	int first = 0;
	int last = 0;
	int gap = 0;
	int passTime = 0;
	int count = 0;
	int check = 0;
	
	while(first < n){
		//Add open time
		time += 60;
		//Find number of boats that pass 30minutes from first boat
		gap = boats[first] + 1800;
		for(int j = first; j < n; j++){
			if(boats[j] < gap){
				count++;
			}else{
				//Also determine final boat and break loop
				last = j-1;
				break;
			}
			last = j;
		}
		//Time that boats take to pass
		passTime = count*20;
		time += passTime;
		//Now check if we can close bridge (boat passing + time to re-open)
		check = passTime + 120 + gap;
		

		//Let this boat pass if re-opening would take longer
		if((last < boats.size()-1) && boats[last+1] < (check)){
			//Let boat pass with 20 for pass, 60 for close, check-time for wait
			time += 20 + 60 + (boats[last+1] - (gap+passTime));
			first = last+2;
		}else{
			//close bridge, set first to next after last
			time += 60;
			first = last+1;
		}
		count = 0;
	}
	
	cout << time << endl;
	return 0;
}