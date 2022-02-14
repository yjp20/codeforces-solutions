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

const int MAX = 1e5+1;
char a[MAX];
char b[MAX];

int main() {
	cin >> a >> b;
	int len1 = strlen(a);
	int len2 = strlen(b);

	if (len1 != len2) {
		cout << "NO";
		return 0;
	}

	int flag = 0;
	int idx = 0;

	for (int i=0; i<len1; i++) {
		if (a[i] != b[i]) {
			switch (flag) {
				case 0:
					flag = 1;
					idx = i;
					break;
				case 1:
					if (a[idx] == b[i] && b[idx] == a[i])
						flag = 2;
					else
						flag = 3;
					break;
				case 2:
					flag = 3;
			}
		}
	}


	if (!flag || flag == 2)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
