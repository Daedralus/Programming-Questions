#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>



using namespace std;



int main()
{
	int n,h,v;
	cin >> n >> h >> v;
	int t = 4, max = 0;
	int s1, s2, s3, s4;
	
	s1 = t * h * v;
	s2 = t * (n - h) * v;
	s3 = t * h * (n - v);
	s4 = t * (n - h) * (n - v);
	if(s1 > s2 && s1 > s3 && s1 > s4)
		max = s1;
	else if(s2 > s1 && s2 > s3 && s2 > s4)
		max = s2;
	else if(s3 > s1 && s3 > s2 && s3 > s4)
		max = s3;
	else
		max = s4;
		
	
	cout << max;
	return 0;
}

