#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>



using namespace std;



int main()
{
	string string;
	int days = 0;
	int i = 0, j = 0;
	cin >> string;
	int length = string.size();

	for(i = 0; i < length; i++){
		
		if(j == 0){
			if(string[i] == 'P')
				j++;
			else{
				string[i] = 'P';
				days++;
				j++;
			}
		}
		else if(j == 1){
			if(string[i] == 'E')
				j++;
			else{
				string[i] = 'E';
				days++;
				j++;
			}
		}
		else if(j == 2){
			if(string[i] == 'R')
				j = 0;
			else{
				string[i] = 'R';
				days++;
				j = 0;
			}
		}

	}
	cout << days;
	return 0;
}

