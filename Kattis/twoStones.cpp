#include <iostream>

using namespace std;

int main()
{
    int turn;
    cin >> turn;
    
    if(turn % 2 == 0){
        cout << "Alice";
        return 0;
    } else{
        cout << "Bob";
        return 0;    
    }
}