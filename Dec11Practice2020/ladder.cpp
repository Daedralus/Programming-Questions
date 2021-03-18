#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

int main(){  
  int h, v;
  cin >> h >> v;

  int w = h / sin(v*M_PI/180) + 1;
  cout << w << endl;


}