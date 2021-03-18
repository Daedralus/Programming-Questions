#include <iostream>
#include <math.h>
#include <string>



using namespace std;



int main()
{
	string input;
	cin >> input;
	int length = input.size();
	
	for(int i = 0; i < length - 1; i++){
		if(input[i] == 's' && input[i+1] == 's'){
			cout << "hiss\n";
			return 0;
		}
	}
	cout << "no hiss\n";
	return 0;
}

