#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;



/*
 * Complete the 'decryptPassword' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string decryptPassword(string a) {
	std::string s = a;
    int size = s.length();
    char c;
    char cn;
    char temp;
	int pos;
    for(int i = 0; i < size; i++){
        c = s[i];
        cn = s[i+1];
        // If upper is followed by lower, swap, and there should be a star following it to get rid of
        if(isupper(c) && islower(cn)){
			pos = i+2;
            s.erase(pos, 1); //Need to delete star as well to avoid double swap
            temp = c; //save char
            s[i] = cn; //swap first
            s[i+1] = temp; //swap second						
            i++; //i is moved to i+2 so needs an additional up
            continue; //skip as iteration done
        }
        //If 0 is reached, take number before character to that position
        if(c == '0'){ //when we see zero, we find last number in start of string and swap
            for(int y = 0; y < size; y++){
                if(isdigit(s[y]) && !isdigit(s[y+1])){ //find first instance where a number is followed by non digit
                    s[i] = s[y]; //set current char (zero) to this instance
                    s.erase(s[y]); //erase the instance found before actual string
                    break; //break from loop
                }
            }
            continue; //skip iteration
        }
    }
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = decryptPassword(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
