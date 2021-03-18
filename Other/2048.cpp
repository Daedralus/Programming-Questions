#include<bits/stdc++.h> 
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;
template<typename T>
vector<T> s(vector<T> const &v, int m, int n) {
   auto first = v.begin() + m;
   auto last = v.begin() + n + 1;
   vector<T> vector(first, last);
   return vector;
}
template<typename T>
void show(vector<T> const &v) {
   for (auto i: v) {
      cout << i << ' ';
   }
   cout << '\n';
}
int main()
{
	vector<int> game;
	int tile = 0;
	int uniqueCount = 0;
	
	vector<int> g1, g2, g3, g4;
	
	for(int i = 0; i < 16; i++){
		cin >> tile;
		game.push_back(tile);
	}
	
	int swipe = 0;
	cin >> swipe;
	//0,1,2,3 -> left, up, right, down
	
	//play left
	if(swipe == 0){
		g1 = s(game, 0, 3);
		g2 = s(game, 4, 7);
		g3 = s(game, 8, 11);
		g4 = s(game, 12, 15);		
	}else if(swipe == 1){
		
	}else if(swipe == 2){
		
	}else if(swipe == 3){
	
	}
	show(g1);
	show(g2);
	show(g3);
	show(g4);
	
	return 0;
}