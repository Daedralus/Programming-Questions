#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

int main() {

    string line;
    map<char, int> soundex;

    soundex['A'] = 0;
    soundex['B'] = 1;
    soundex['C'] = 2;
    soundex['D'] = 3;
    soundex['E'] = 0;
    soundex['F'] = 1;
    soundex['G'] = 2;
    soundex['H'] = 0;
    soundex['I'] = 0;
    soundex['J'] = 2;
    soundex['K'] = 2;
    soundex['L'] = 4;
    soundex['M'] = 5;
    soundex['N'] = 5;
    soundex['O'] = 0;
    soundex['P'] = 1;
    soundex['Q'] = 2;
    soundex['R'] = 6;
    soundex['S'] = 2;
    soundex['T'] = 3;
    soundex['U'] = 0;
    soundex['V'] = 1;
    soundex['W'] = 0;
    soundex['X'] = 2;
    soundex['Y'] = 0;
    soundex['Z'] = 2;
    
    while (cin >> line) {
        int repeat = -1;
        for (auto i : line) {
            if (soundex[i] && soundex[i] != repeat) {
                repeat = soundex[i];
				cout << soundex[i];
            }
            if (!soundex[i]) {
                repeat = soundex[i];
            }
        }
        cout << endl;
    }
	return 0;
}