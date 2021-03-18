#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

int main(){
    
    int as[] = {0,0,0};
	int bs[] = {0,0,0};
	int ar = 0, br = 0;
    int n = 0;
    for(int i = 0; i < 3; i++){
        cin >> n;
		as[i] = n;
    }
	for(int i = 0; i < 3; i++){
        cin >> n;
		bs[i] = n;
    }
	for (int y = 0; y < 3; y++){
		if(as[y] != bs[y]){
			if(as[y] > bs[y]){
				ar++;
			}
			else {
				br++;
			}
		}
	}
    
	cout << ar << " " << br << endl;
    return 0;
}