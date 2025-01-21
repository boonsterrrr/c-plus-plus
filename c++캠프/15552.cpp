#include <iostream>
#include <string>

using namespace std;
//15552
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a;
	cin >> a;
	int p, q;
	for (int i = 0; i < a; i++) {
		cin >> p >> q;
		cout << p + q << '\n';
	}

}