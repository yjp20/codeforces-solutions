#include <bits/stdc++.h>

using namespace std;

int main() {
	char s[101]; scanf("%s", s);
	int len = strlen(s);
	bool leading = true;
	for (int i=1; i<len; i++) {
		if (s[i] == '1') leading = false;
	}
	printf("%d", (len+1-leading)/2);
}
