#include<bits/stdc++.h> 
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;


int main()
{
    int contests;
	int prizes = 0;
	int prize;
	
	cin >> contests;
	for(int i = 0; i < contests; i++){
		cin >> prize;
		prizes += prize;
	}
	if((prizes % 3) == 0){
		cout << "yes\n";
	}else{
		cout << "no\n";
	}
	return 0;
}