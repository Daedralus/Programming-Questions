#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

int main(){  
	int k, n, last = 0;
	int passes = 1;
	cin >> k;

	for(int i = 0; i < k; i++){
		cin >> n;
		if(n < last){
			passes++;
		}
		last = n;
	}
	cout << passes << endl;
}