#include <iostream>
#include <queue> queue<int> q;
using namespace std;
//2164번

int main() {
	queue<int> que;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		que.push(i);
	}
	while (que.size() != 1) {
		que.pop();
		que.push(que.front());
		que.pop();
	}
	cout << que.front();
	
}
