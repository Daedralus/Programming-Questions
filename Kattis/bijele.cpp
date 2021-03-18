#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>



using namespace std;



int main()
{
	string space = " ";
	int pieces[6] = {1,1,2,2,2,8};
	int temp = 0;
	
	for(int i = 0; i < 6; i++){
		cin >> temp;
		pieces[i] -= temp; 
		cout << pieces[i] << space;
	}
}

