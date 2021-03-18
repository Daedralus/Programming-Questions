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
	int digits;
	string nines;
	int nine;
	int remainder = 0;
	int temp2;
	cin >> n;
	int temp = n;
	cout << "temp: " << temp << endl;
	if(n < 10){
		cout << n << endl;
		return 0;
	}
	
	while(temp){
		temp /= 10;
		digits++;
	}
	cout << "digits: " << digits << endl;
	//a 999 solution
	if(digits > 1){
		for(int i = 1; i < digits; i++){
			nines.append("9");
		}
		nine = stoi(nines);
		cout << nine << endl;
	}
	digits = 0;
	cout << n - nine << endl << "ANS:\n";
	
	
	remainder = n - nine;
	if(remainder < 10){
		cout << nine << endl << remainder << endl;
		return 0;
	}else{
		temp2 = remainder;
		while(temp2){
			temp2 /= 10;
			digits++;
		}
		if(digits == 3){
			string three = to_string(remainder);
			int first = (int)(three[0]);
			int third = (int)(three[2]);
			if(first == third){
				cout << remainder << endl;
				return 0;
			}
			
		}else if(digits == 4){
			
		}
	}
	
	
	
}