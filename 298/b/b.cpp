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

const int MAX = 1e5;
int T, s_x, s_y, e_x, e_y;
char moves[MAX+1];

int main() {
	cin >> T >> s_x >> s_y >> e_x >> e_y;
	cin >> moves;

	int x = e_x - s_x;
	int y = e_y - s_y;

	for (int i=0; i<T; i++) {
		switch (moves[i]) {
			case 'N':
				if (y > 0) y--;
				break;
			case 'E':
				if (x > 0) x--;
				break;
			case 'S':
				if (y < 0) y++;
				break;
			case 'W':
				if (x < 0) x++;
				break;
		}

		if (!x && !y) {
			cout << i+1 << endl;
			return 0;
		}
	}

	cout << -1;
	return 0;
}
