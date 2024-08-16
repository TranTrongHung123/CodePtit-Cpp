#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

bool check(string s){
	for(auto x : s){
		if(x != '0' && x != '6' && x != '8'){
			return false;
		}
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
		if(check(s)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}