// youngjinp20
// 2019 11

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	unsigned long long n;
	int i=0;
	cin >> n;
	while (n) {
		if (n%10L == 4L || n%10L == 7) {
			i ++;
		}
		n /= 10L;
	}
	if (i == 0) {
		puts("NO");
		return 0;
	}
	while (i) {
		if (i%10 != 4 && i%10 != 7) {
			puts("NO");
			return 0;
		}
		i /= 10;
	}
	puts("YES");
	return 0;
}
