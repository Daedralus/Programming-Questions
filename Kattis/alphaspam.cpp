#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>



using namespace std;



int main()
{
	string input;
	double whiteSpace = 0, lower = 0, upper = 0, symbols = 0;
	int length, c;
	double w, l , u , s, total = 0;;
	cin >> input;
	length = input.size();
	for (int i = 0; i < length; i ++){
		c = int(input[i]);
		if(islower(input[i])){
			lower++;
		} else if (isupper(input[i])){
			upper++;
		} else if (c == 95){
			whiteSpace++;
		} else {
			symbols++;
		}
	}
	w = whiteSpace / length;
	l = lower / length;
	u = upper / length;
	s = symbols / length;
	
	cout << fixed;
	cout << setprecision(16);
	cout << w << endl << l << endl << u << endl << s << endl;
	return 0;
}

