#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	int x1, x2, x3, x4;
	int score, person;
	int i = 1, max = 0;
	while(cin >> x1 >> x2 >> x3 >> x4){
		score = x1 + x2 + x3 + x4;
		if(max < score){
			max = score;
			person = i;
		}
		
		i++;
	}
	cout << person << " " << max;	
	return 0;
}

