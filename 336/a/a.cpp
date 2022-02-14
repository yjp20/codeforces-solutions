// youngjinp20
// 2020 06

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

int main() {
	int X, Y;
	cin >> X >> Y;

	int orient = 0;

	if (X < 0) {
		X = -X;
		orient += 1;
	}
	if (Y < 0) {
		Y = -Y;
		orient += 2;
	}

	int sum = X+Y;

	switch (orient) {
		case 0:
			printf("0 %d %d 0", sum, sum);
			break;
		case 1:
			printf("%d 0 0 %d", -sum, sum);
			break;
		case 2:
			printf("0 %d %d 0", -sum, sum);
			break;
		case 3:
			printf("%d 0 0 %d", -sum, -sum);
			break;

	}
	return 0;
}
