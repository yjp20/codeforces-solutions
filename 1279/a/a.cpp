// youngjinp20
// 2019 12

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	int N;
	cin >> N;
	for (int i=0; i<N; i++) {
		int a, b, c;
		bool flag = false;
		cin >> a >> b >> c;
		flag = a > b+c+1 || b > a+c+1 || c > a+b+1;
		printf(flag ? "No\n" : "Yes\n");
	}

	return 0;
}
