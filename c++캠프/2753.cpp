#include <iostream>
#include <string>

using namespace std;
//2753
int main() {
	int n;
	cin >> n;
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) {
		cout << 1;
	}
	else {
		cout << 0;
	}
}