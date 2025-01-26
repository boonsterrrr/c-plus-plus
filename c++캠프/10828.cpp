#include <iostream>
#include <stack>

using namespace std;
//10828
int main() {
	stack<int> stack;

	int n;
	cin >> n;
	string word;
	int num;
	int a;

	for (int i = 0; i < n; i++) {
		cin >> word;

		if (word == "push") {
			cin >> num;
			stack.push(num);
		}

		else if (word == "pop") {
			if (stack.size() == 0) {
				a = -1;
				cout << a << endl;;
			}
			else {
				a = stack.top();
				cout << a << endl;
				stack.pop();
			}

		}
		else if (word == "size") {
			cout << stack.size() << endl;
		}

		else if (word == "empty") {
			if (stack.size() == 0) {
				a = 1;
				cout << a << endl;
			}
			else {
				a = 0;
				cout << a << endl;
			}
		}
		else if (word == "top") {
			if (stack.size() == 0) {
				a = -1;
				cout << a << endl;
			}
			else {
				a = stack.top();
				cout << a << endl;
			}
		}


	}
}