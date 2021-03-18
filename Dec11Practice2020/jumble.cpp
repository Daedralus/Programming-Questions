#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

int main(){  
	int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int byte;
        cin >> byte;
        for(int i = 0; i < 256; i++){
            int exp = i ^ (i << 1);
            if(byte == exp % 256){
                cout << i << " ";
                break;
            }
        }
    }
   
    return 0; 
}
	