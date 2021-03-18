#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

vector<int> game;


int checkRobot(int robots, int robId, int pos) {
	int pos2;
	for (int j = 1; j < robots + 1; j++) {
		pos2 = ((j - 1) * 3);

		if (pos == pos2) {
			continue;
		}

		if (game[pos] == game[pos2] && game[pos + 1] == game[pos2 + 1]) {
			cout << "Robot " << robId << " crashes into robot " << j << endl;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int cases;
	int length, height;
	int robots, instructions;
	int X, Y, dir;
	char face, action;
	int robId, repeats;
	int pos;
	int pos2;
	int temp;
	int coord;
	int fail = 0;

	cin >> cases;
	for (int i = 0; i < cases; i++) {
		cin >> length >> height >> robots >> instructions;
		fail = 0;
		game.clear();
		for (int y = 0; y < robots; y++) {
			//facing N = 0, E = 1, S = 2, W = 3
			cin >> X >> Y >> face;
			switch (face) {
			case 'N':
				dir = 0;
				break;
			case 'E':
				dir = 1;
				break;
			case 'S':
				dir = 2;
				break;
			case 'W':
				dir = 3;
				break;
			}
			game.push_back(X);
			game.push_back(Y);
			game.push_back(dir);
		}
		for (int z = 0; z < instructions; z++) {
			cin >> robId >> action >> repeats;
			pos = (robId - 1) * 3;

			if (fail == 1) {
				continue;
			}

			switch (action) {
			case 'L':
				temp = game[pos + 2];
				for (int l = 0; l < repeats; l++) {
					temp--;
					if (temp < 0) {
						temp = 3;
					}
				}
				game[pos + 2] = temp;
				break;
			case 'R':
				temp = game[pos + 2];
				for (int r = 0; r < repeats; r++) {
					temp++;
					if (temp > 3) {
						temp = 0;
					}
				}

				game[pos + 2] = temp;
				break;
			case 'F':
				temp = game[pos + 2];
				switch (temp) {
				case 0:
					coord = game[pos + 1];
					for (int n = 0; n < repeats; n++) {
						coord++;
						game[pos + 1] = coord;
						fail = checkRobot(robots, robId, pos);
						if (fail == 1) { break; }
					}
					
					if (coord > Y) {
						cout << "Robot " << robId << " crashes into the wall\n";
						game[pos + 1] = Y;
						fail = 1;
						break;
					}
					game[pos + 1] = coord;
					break;
				case 1:
					coord = game[pos];
					for (int n = 0; n < repeats; n++) {
						coord++;
						game[pos] = coord;
						fail = checkRobot(robots, robId, pos);
						if (fail == 1) { break; }
					}
					if (fail == 1) { break; }
					if (coord > X) {
						cout << "Robot " << robId << " crashes into the wall\n";
						game[pos] = X;
						fail = 1;
						break;
					}
					game[pos] = coord;
					break;
				case 2:
					coord = game[pos + 1];
					for (int n = 0; n < repeats; n++) {
						coord--;
						game[pos + 1] = coord;
						fail = checkRobot(robots, robId, pos);
						if (fail == 1) { break; }
					}
					if (fail == 1) { break; }
					if (coord < 0) {
						cout << "Robot " << robId << " crashes into the wall\n";
						game[pos + 1] = 0;
						fail = 1;
						break;
					}

					game[pos + 1] = coord;
					break;
				case 3:
					coord = game[pos];
					for (int n = 0; n < repeats; n++) {
						coord--;
						game[pos] = coord;
						fail = checkRobot(robots, robId, pos);
						if (fail == 1) { break; }
					}
					if (fail == 1) { break; }

					if (coord < 0) {
						cout << "Robot " << robId << " crashes into the wall\n";
						game[pos] = 0;
						fail = 1;
						break;
					}
					game[pos] = coord;
					break;
				}
			}
			if (fail == 1) {
				continue;
			}

			if (z == instructions - 1) {
				cout << "OK\n";
			}

		}

	}

	return 0;
}
