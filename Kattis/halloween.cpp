#include <iostream>
#include <math.h>
#include <string>



using namespace std;



int main()
{
	string input, date;
	int n;
	cin >> input >> n;
	if(input == "OCT 31" || input == "DEC 25")
		cout << "yup\n";
	else
		cout << "nope\n";
	return 0;
}

