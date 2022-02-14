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
	char s[105];
	cin >> s;
	int len = strlen(s);
	set<int> S;

	for (int i=0; i<len; i++) {
		S.insert(s[i]);
	}

	printf("%s", S.size() & 1 ? "IGNORE HIM!" : "CHAT WITH HER!");

	return 0;
}
