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
	char a[2][105] = {0};
	char b[105] = {0};
	scanf("%[^\n]\n", a[0]);
	scanf("%[^\n]\n", a[1]);
	scanf("%[^\n]\n", b);


	int idx[26] = {0};
	int jdx[26] = {0};
	for (int j=0; j<2; j++) {
		for (int i=0; i<strlen(a[j]); i++) {
			idx[a[j][i]-'A']++;
		}
	}

	for (int i=0; i<strlen(b); i++) {
		jdx[b[i]-'A']++;
	}

	for (int i=0; i<26; i++) {
		if (idx[i] != jdx[i]) {
			puts("NO");
			return 0;
		}
	}

	puts("YES");
	return 0;
}
