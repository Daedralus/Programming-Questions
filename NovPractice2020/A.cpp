#include<bits/stdc++.h> 
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;


int main()
{
	string A, B; 
	char op;
	string result = "1";
	cin >> A >> op >> B;
	int sizeA = A.length();
	int sizeB = B.length();
	int diff = 0;
	
	
	
	//cout << sizeA << sizeB << endl;
	
	if(op == '*'){
		int diff = sizeA + sizeB - 2;
		//cout << diff << endl;
		for(int i = 0; i < diff; i++){
			//cout << "kek\n";
			result += '0';
		}
	}else if(op == '+'){
		if(sizeA > sizeB){
			diff = sizeA - sizeB;
			for(int i = 1; i < sizeA; i++){
				if(i != diff){
					result += '0';
				}else{
					result += '1';
				}
			}
		}else if(sizeA < sizeB){
			diff = sizeB - sizeA;
			for(int i = 1; i < sizeB; i++){
				if(i != diff){
					result += '0';
				}else{
					result += '1';
				}
			}
		}else if(sizeA == sizeB){
			result = "2";
			for(int i = 1; i < sizeB; i++){
				result += '0';
			}
		}
		
	}
	cout << result;
	return 0;
}