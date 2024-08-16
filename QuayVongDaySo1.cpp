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
		int n, d;
		cin >> n >> d;
		deque<int> dq;
		for(int i = 1; i <= n; i++){
			int x;
			cin >> x;
			dq.push_front(x);
		}
		while(d--){
			int tmp = dq.back();
			dq.pop_back();
			dq.push_front(tmp);
		}
		vector<int> vt;
		for(auto x : dq){
			vt.push_back(x);
		}
		for(int i = vt.size() - 1; i >= 0; i--){
			cout << vt[i] << " ";
		}
		cout << endl;
	}
}