#include<bits/stdc++.h> 
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;


int main()
{
	int h, w, n;
	cin >> h >> w;
	vector<int> blocks;
	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++){
			cin >> n;
			blocks.push_back(n);
		}
	}
}