#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

int main(){
    
    string first;
	string second;
	
	cin >> first >> second;
	if(first.length() < second.length()){
		cout << "no\n";
	}else{
		cout << "go\n";
	}
	return 0;
}