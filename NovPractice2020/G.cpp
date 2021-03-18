#include<bits/stdc++.h> 
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;


int main()
{
	int cases = 0;
	int strips = 0;
	int result = 1;
	int holes = 0;
	cin >> cases;
	
	for(int i = 0; i < cases; i++){
		cin >> strips;
		//cout << "cases: " << cases << " strips: " << strips << endl;
		for(int y = 0; y < strips; y++){
			cin >> holes;
			result += holes-1;
		}
		cout << result << "\n";
		result = 1;
	}
	
	return 0;
}