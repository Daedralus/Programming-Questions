#include<bits/stdc++.h> 
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;


int main()
{
    int teams, problems;
	int score;
	int last = 0;
	bool breaked = false;
	bool locked = false;
	vector<int> scores;
	vector<int> positions;
	
	
	cin >> teams >> problems;
	
	
	for(int i = 0; i < teams; i++){
		cin >> score;
		scores.push_back(score);	
	}
	
	if(problems == 1){
		if(scores[0] == 0){
			cout << 0 << endl;
			return 0;
		}
		for(int i = 0; i < teams; i++){
			if(scores[i] > 0){
				cout << 1 << endl;
			}else{
				cout << 0 << endl;
			}
		}
		
		return 0;
	}
	
	if(scores[0] == 0){
		for(int i = 0; i < teams; i++){
			cout << 0 << endl;
		}
		return 0;
	}
	
	for(int i = 0; i < teams; i++){		
		int first = scores[i];
		
		if(first < last){			
			problems--;
		}	
		positions.push_back(problems);	
		last = first;
		int kek = i;
		if(first == 0){
			breaked = true;
			break;
		}
		//cout << problems << endl;
	}	
	
	if(problems != 0){
		cout << "ambiguous\n";
	}else{
		for(int i = 0; i < teams; i++){
			cout << positions[i] << endl;
		}
	}
	if(breaked){
		for(int i = kek; i < teams; i++){
			cout << 0 << endl;
		}
	}
	return 0;
}