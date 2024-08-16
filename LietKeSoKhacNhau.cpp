#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	set<int> st;
	for(int i = 1; i <= n; i++){
		int x;
		cin >> x;
		st.insert(x);
	}
	for(auto x : st){
		cout << x << " ";
	}
}