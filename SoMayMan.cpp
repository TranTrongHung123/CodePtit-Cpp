#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

bool check(string s){
	int idx = s.size() - 1;
	if(s[idx] == '6' && s[idx-1] == '8'){
		return true;
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(check(s)){
			cout << 1 << endl;
		}
		else{
			cout << 0 << endl;
		}
	}
}