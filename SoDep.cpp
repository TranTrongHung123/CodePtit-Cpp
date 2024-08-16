#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

bool check(string s){
	for(auto x : s){
		if((x - '0') % 2 != 0){
			return false;
		}
	}
	int l = 0, r = s.size() - 1;
	while(l < r){
		if(s[l] != s[r]) return false;
		++l;
		--r;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(check(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}