#include <iostream>
#include <string>

using namespace std;

//1094

int main() {
	int x;
	int count = 0;
	cin >> x;
	while (x) {
		count += x % 2;
		x = x / 2;
	}
	cout << count;
	
}