#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		priority_queue<int> q;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			q.push(x);
		}
		while(k--){
			cout << q.top() << " ";
			q.pop();
		}
		cout << endl;
	}
}