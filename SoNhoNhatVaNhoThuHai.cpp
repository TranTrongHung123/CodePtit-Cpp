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
		int n;
		cin >> n;
		int a[n];
		priority_queue<int, vector<int>, greater<int>> q;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			q.push(a[i]);
		}
		int x = q.top();
		q.pop();
		while(!q.empty() && q.top() == x){
			q.pop();
		}
		if(q.empty()){
			cout << "-1" << endl;
		}
		else{
			cout << x << " " << q.top() << endl;
		}
	}
}