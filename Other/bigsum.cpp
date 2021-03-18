#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

int main(){
    
    int digits;
    int n = 0;
    double result = 0;

    cin >> digits;
    for(int i=0; i < digits; i++){
        cin >> n;
        
        result = result +  n;

        cout << "n:" << n << ", result:" << result << endl; 
    }
    
    cout << result << endl;
    return 0;
}