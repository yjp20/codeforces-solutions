// youngjinp20
// 2019 08

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int a, b;
int it;

int main() {
	cin >> a >> b;
	while (a < b) {
		it ++;
		a *= 3;
		b *= 2;
	}
	cout << it;
	return 0;
}
