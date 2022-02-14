// youngjinp20
// 2020 08

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

int main() {
	int a, b, sum=0;
	cin >> a >> b;
	int g = gcd(a, b);
	a /= g;
	b /= g;

	while (a%2 == 0) a /= 2, sum++;
	while (a%3 == 0) a /= 3, sum++;
	while (a%5 == 0) a /= 5, sum++;
	while (b%2 == 0) b /= 2, sum++;
	while (b%3 == 0) b /= 3, sum++;
	while (b%5 == 0) b /= 5, sum++;

	if (a != 1 || b != 1) {
		cout << -1;
		return 0;
	}
	cout << sum;
	return 0;
}
