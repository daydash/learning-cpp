int NthTerm(int n) {
	long long int ans = 1;
	long long int mod = 1e9 + 7;
	for (long long int i = 1; i <= n; i++) {
		ans = (ans * i) + 1LL;
		ans %= mod;
	}
	return (int)ans;
}