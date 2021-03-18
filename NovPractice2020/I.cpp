#include<bits/stdc++.h> 
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;


int main()
{
	int max = 1000;
	int min = 1;
	int guess = 500;;
	string ok = "correct";
	string up = "higher";
	string down = "lower";
	string response = "";
	cout << guess << endl;
	
	for(int i = 0; i < 10; i++){
		cin >> response;
		if(response == up){
			min = guess + 1;
			guess = (max+min)/2;
			cout << guess << endl;
			cout << flush;
			
		}else if(response == down){
			max = guess - 1;
			guess = (max+min)/2;
			cout << guess << endl;
			cout << flush;
		}else{
			return 0;
		}
	}
	
	return 0;
}