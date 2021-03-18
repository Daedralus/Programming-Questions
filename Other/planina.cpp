#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

int main(){
    
    int n;
	int points = 4;
	int squares = 1;
    cin >> n;
	
    for(int i=0; i < n; i++){
        squares *= 2;
		points = squares + 1;
		points *= points;
    }
    
    cout << points << endl;
    return 0;
}