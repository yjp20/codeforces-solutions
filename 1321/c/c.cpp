// youngjinp20
// 2020 03

#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define pb push_back

typedef long long ll;

int n;
int ct;
vector<char> s;

int main() {
	cin >> n;

	for (int i=0; i<n; i++) {
		char c;
		scanf("\n%c", &c);
		s.push_back(c);
	}

	for (int i='z'; i>'a'; i--) {
		bool changed = true;
		while (changed) {
			auto it = s.begin();
			changed = false;
			while (it < s.end()) {
				bool a = it > s.begin();
				bool b = next(it) < s.end();
				bool aa = a && *prev(it) == i-1;
				bool bb = b && *next(it) == i-1;
				if (*it == i && (aa || bb)) {
					s.erase(it);
					ct ++;
					changed = true;
					break;
				}
				it ++;
			}
		}
	}

	cout << ct;

	return 0;
}
