#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>



using namespace std;



int main()
{
	string input;
	int length, c,i;
	
	cin >> input;
	length = input.size();
	
	for (i = 0; i < length; i ++){			
		if(isupper(input[i])){
			cout << input[i];
		}
	}

	return 0;
}

