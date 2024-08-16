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
		string s;
		cin >> s;
		stack<int> stk;
		stk.push(1);
		int ans = 1;
		for(auto x : s){
			++ans;
			if(x == 'I'){
				while(!stk.empty()){
					cout << stk.top();
					stk.pop();
				}
			}
			stk.push(ans);
		}
		while(!stk.empty()){
			cout << stk.top();
			stk.pop();
		}	
		cout << endl;	
	}
}