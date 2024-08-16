#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

bool check(string s){
	for(int i = 1; i < s.size(); i++){
		int x = s[i-1] - '0';
		int y = s[i] - '0';
		if(abs(x-y) != 1){
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
			cout << "YES";
		}
		else{
			cout << "NO";
		}
		cout << endl;
	}
}