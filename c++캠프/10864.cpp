#include <iostream>
#include <string>

using namespace std;
//
////10864

int main() {
	int n, m;
	cin >> n >> m;
	int arr[1001] = { 0, };
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		arr[a]++;
		arr[b]++;
	}
	
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << '\n';
	}

}