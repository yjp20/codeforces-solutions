// youngjinp20
// 2021 08

#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<utility>
#include<numeric>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

int main() {
	int N;
	cin >> N;
	ll A[N];

	for (int i=0; i<N; i++) {
		cin >> A[i];
	}

	sort(A, A+N);

	ll a=0;
	ll b=0;
	for (int i=0; i<N; i++) {
		b += A[i] * i - a;
		a += A[i];
	}

	ll numerator = a + b*2;
	ll g = gcd(numerator, N);

	cout << numerator/g << " " << N/g << endl;

	return 0;
}
