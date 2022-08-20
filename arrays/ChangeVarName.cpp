#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("D:/daydash/input.txt", "r", stdin);
	freopen("D:/daydash/output.txt", "w", stdout);
#endif

	// string str = "thisIsAVariable";
	string str = "modify_variableName";
	// string str = "modify_variable_name";

	string str_out = "";
	bool flag = false;
	for (int x = 0; x < str.length(); x++) {
		if (str[x] == '_') {
			flag = true;
			break;
		}

	}


	if (flag) {
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '_') {
				i++;
				if (str[i] >= 'A' && str[i] <= 'Z')
					str_out.push_back(str[i] + 32);
				else
					str_out.push_back(str[i] - 32);
			}
			else {
				str_out.push_back(str[i]);
			}
		}
	}
	else {
		for (int i = 0; i < str.length(); i++) {
			if (str[i] >= 'A' && str[i] <= 'Z') {
				str_out.push_back('_');
				str_out.push_back(str[i] + 32);
			}
			else {
				str_out.push_back(str[i]);
			}
		}
	}
	cout << str_out;
	cout << endl;
}
