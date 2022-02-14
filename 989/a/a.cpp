// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	char s[105];
	bool flag = false;
	scanf("%s", s);
	for (int i=1; i<strlen(s); i++) {
		int u[110] = {0};
		u[s[i  ]] ++;
		u[s[i-1]] ++;
		u[s[i+1]] ++;
		if (u['A'] && u['B'] && u['C']) flag = true;
	}
	printf("%s\n", flag ? "Yes" : "No");
	return 0;
}
