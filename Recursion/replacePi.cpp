#include<bits/stdc++.h>
using namespace std;

int length(char input[]) {
	int len = 0;
	for (int i = 0; input[i] != '\0'; i++) {
		len++;
	}
	return len;
}

void replacePi(char input[], int start) {
	if (input[start] == '\0' || input[start + 1] == '\0') {
		return;
	}
	replacePi(input, start + 1);
	if (input[start] == 'p' && input[start + 1] == 'i') {
		int len = length(input);
		input[len + 2] = '\0';
		for (int i = len - 1; i >= start + 2; i--) {
			input[i + 2] = input[i];
		}
		input[start] = '3';
		input[start + 1] = '.';
		input[start + 2] = '1';
		input[start + 3] = '4';
	}
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--) {

		char str[] = "xpixpi";

		replacePi(str, 0);

	}