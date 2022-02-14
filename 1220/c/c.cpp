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
	char s[500005];
	char mi='z';
	scanf("%s", &s);
	int len = strlen(s);

	for (int i=0; i<len; i++) {
		if (i) printf("%s\n", s[i] > mi ? "Ann" : "Mike");
		else printf("Mike\n");
		mi = min(s[i], mi);
	}
	return 0;
}
