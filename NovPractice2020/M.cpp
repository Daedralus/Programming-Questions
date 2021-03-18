#include<bits/stdc++.h> 
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;


int main()
{
	string kek;
	string kappa;
	int NOPs = 0;
	int tweeners = 0;
	int mod = 0;
	cin >> kek;
	
	for(int i = 1; i < kek.length(); i++){		
		if(islower(kek[i])){
            tweeners++;
        }else if(isupper(kek[i])){
            if(tweeners < 4){
                NOPs += 3 - tweeners;
                tweeners = 0;
            }else{
                mod = tweeners%4;
                NOPs += 3-mod;
				tweeners = 0;
            }           
        }
	}
	cout << NOPs << endl;
	
	
	return 0;
}