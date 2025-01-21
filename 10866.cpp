#include <iostream>
#include <string>
#include <deque>

using namespace std;

//10866

int main() {
	deque<int> dq;

	int n;
	int a;
	cin >> n;
	string word;
	for (int i = 0; i < n; i++) {
		cin >> word;

		if (word == "push_front") {
			cin >> a;
			dq.push_front(a);
		}
		else if (word == "push_back") {
			cin >> a;
			dq.push_back(a);
		}
		else if (word == "pop_front") {
			if (dq.empty()) {
				cout << -1<<'\n';
			}
			else {
				cout << dq.front() << '\n';
				dq.pop_front();
			}
		}
		else if (word == "pop_back") {
			if (dq.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << dq.back() << '\n';
				dq.pop_back();
			}
		}
		else if (word == "size") {
			cout << dq.size() << '\n';
		}
		else if (word == "empty") {
			if (!dq.empty()) {
				cout << 0<<'\n';
			}
			else cout << 1<<'\n';
		}
		else if (word == "front") {
			if (dq.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << dq.front() << '\n';
			}
		}
		else if (word == "back") {
			if (dq.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << dq.back() << '\n';
			}
		}
	}

	
}