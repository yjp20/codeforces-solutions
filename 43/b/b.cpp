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

int c(char x) {
	if ('A' <= x && x <= 'Z') return x-'A';
	if ('a' <= x && x <= 'z') return x-'a'+26;
	return 52;
}

int ct1[53];
int ct2[53];

char A[205];
char B[205];

int main() {
	fgets(A, 205, stdin);
	fgets(B, 205, stdin);

	int len1 = strlen(A);
	int len2 = strlen(B);

	for (int i=0; i<len1; i++) ct1[c(A[i])]++;
	for (int i=0; i<len2; i++) ct2[c(B[i])]++;

	for (int i=0; i<52; i++) {
		if (ct2[i] > ct1[i]) {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";
	return 0;
}
