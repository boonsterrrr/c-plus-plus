#include <iostream>
#include <string>
#include <queue>

using namespace std;
//10845

int main() {
	int n;
	queue<int> q;
	string word;
	cin >> n;
	int a;
	for (int i = 0; i < n; i++) {
		cin >> word;
		if (word == "push") {
			cin >> a;
			q.push(a);
		}
		else if (word == "pop") {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (word == "size") {
			cout << q.size() << '\n';
		}
		else if (word == "empty") {
			cout << q.empty() << '\n';
		}
		else if (word == "front") {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.front() << '\n';
			}
		}
		else if (word == "back") {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.back() << '\n';
			}
		}
	}
}


