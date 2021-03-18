#include <iostream>
#include <math.h>

using namespace std;

double sizer(int W, int H) {
	int hyp;
	hyp = sqrt(W * W + H * H);
	return hyp;
}

int main()
{
	int N, W, H, length, fit;
	cin >> N >> W >> H;

	fit = sizer(W, H);
	while (cin >> length) {
		if (fit >= length)
			cout << "DA\n";
		else
			cout << "NE\n";
	}
	return 0;
}

