#include <iostream>
#include <stack>
#include <string>

using namespace std;
//10773번

int main() {
	stack <int> st;
	int k;
	cin >> k;
	int a;

	for (int i = 0; i < k; i++) {
		cin >> a;

		if (a == 0) {
			st.pop();
		}
		else {
			st.push(a);
		}
	}

	int sum=0;
	while (!st.empty()) {
		sum += st.top();
		st.pop();
	}
	cout << sum;
}

