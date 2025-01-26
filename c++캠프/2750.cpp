#include <iostream>
#include <string>
#include <vector>

using namespace std;
//2750

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				int p = a[j + 1];
				a[j + 1] = a[j];
				a[j] = p;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << '\n';
	}
}