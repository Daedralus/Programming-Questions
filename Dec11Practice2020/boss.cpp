#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

int main(){
    
    int pillars;
	int bombs;
	cin >> pillars;
	
	if(pillars <= 2){
		bombs = 1;
	}else{
		bombs = pillars - 2;
	}
	cout << bombs << endl;
	return 0;
}