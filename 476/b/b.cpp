// youngjinp20
// 2020 05

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

const int MAX = 11;
char A[MAX];
char B[MAX];

int main() {
	cin >> A;
	cin >> B;

	cout << setprecision(10);
	int len = strlen(A);
	int pos = 0;
	int rec = 0;
	int unk = 0;

	for (int i=0; i<len; i++) {
		pos += A[i] == '+';
		pos -= A[i] == '-';
	}

	for (int i=0; i<len; i++) {
		rec += B[i] == '+';
		rec -= B[i] == '-';
		unk += B[i] == '?';
	}

	int diff = abs(pos - rec);

	if (diff > unk || (unk&1) != (diff&1)) {
		cout << 0;
		return 0;
	}

	double num = 1;
	for (int i=0; i<(unk+diff)/2; i++) {
		num *= (double) (unk-i) / (i+1);
	}
	cout << (num / (1 << unk));

	return 0;
}
