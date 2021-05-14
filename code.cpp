#include <bits/stdc++.h>
#include <random>
#define int long long
#define pb push_back
#define PI 3.1415926535
using namespace std;
int32_t main() {
	random_device rd;
	mt19937 gen(rd());
	long double a, b;
	cin >> a >> b;
	uniform_real_distribution<> distr(a, b);
	int num_n_values;
	cin >> num_n_values;
	while (num_n_values--)
	{
		int n;
		cin >> n;
		long double sum = 0.0;
		for (int i = 0; i < n; i++)
		{
			long double val = distr(gen);
			sum += exp(-((val * val) / 2));
		}
		sum *= ((b - a) / n);
		cout << sum << "\n";
	}
	return 0;
}