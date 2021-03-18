#include <iostream>
#include <math.h>

using namespace std;



int main()
{
	int n, x, j;
	int result;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> x;
		result = 1;
		for(j = 1; j <= x; j++){
			result = result * j;
		}
		result = result % 10;
		cout << result << endl;
		
	}
	return 0;
}

