#include<bits/stdc++.h> 
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;


int main()
{
    //a < b, b < c
	int a, b ,c, temp;
	string abc;
	cin >> a >> b >> c >> abc;
	
	if(a < b && b < c){
		
	}else if(a > b && b < c){
		a = temp;
		a = b;
		b = temp;
	}else if(a < b && b > c){
		b = temp;
		b = c;
		c = temp;
	}else if(a > b && b > c){
		a = temp;
		a = c;
		c = a;
	}
	
	if(abc[0] == 'A'){
		cout << a << " ";
	}else if(abc[0] == 'B'){
		cout << b << " ";
	}else{
		cout << c << " ";
	}
	
	if(abc[1] == 'A'){
		cout << a << " ";
	}else if(abc[1] == 'B'){
		cout << b << " ";
	}else{
		cout << c << " ";
	}
	
	if(abc[2] == 'A'){
		cout << a << "\n";
	}else if(abc[2] == 'B'){
		cout << b << "\n";
	}else{
		cout << c << "\n";
	}
	return 0;
}