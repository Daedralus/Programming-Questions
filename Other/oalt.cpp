#include<bits/stdc++.h> 
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;


int main()
{
	string input;
	string output;
	char entry;
	int check;
	int thrice = 0;
	
	while(cin >> input){
		for(int i = 0; i < input.length(); i++){
			if(input[i] == 'L'){
				entry = '4';
			}else if(input[i] == 'R'){
				entry = '6';
			}else if(input[i] == 'M' || input[i] == 'N'){
				entry = '5';
			}else if(input[i] == 'D' || input[i] == 'T'){
				entry = '3';
			}else if(input[i] == 'B' || input[i] == 'F' || input[i] == 'P' || input[i] == 'V'){
				entry = '1';
			}else if(input[i] == 'C' || input[i] == 'G' || input[i] == 'J' || input[i] == 'K' || input[i] == 'Q' || input[i] == 'S' || input[i] == 'X' || input[i] == 'Z'){
				entry = '2';
			}
			if(entry == 'a'){
				continue;
			}
			check = output.length()-1;
			if(check == -1){
				output = entry;
			}else if(check >= 0){
				if(output[check] == entry && thrice == 0){
					thrice++;
					entry = 'a';
					continue;				
				}else if(output[check] == entry && thrice == 1){
					thrice = 0;
					output += entry;
				}else{
					thrice = 0;
					output += entry;
				}
			}
			entry = 'a';
		}
		cout << output << endl;
		output = "";
	}
	
	return 0;
}