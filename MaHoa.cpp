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
		s[s.size()] = '#';
		for(int i = 0; i < s.size(); i++){
			int idx = i, cnt = 1;
			while(s[idx] == s[idx+1]){
				++idx;
				++cnt;
			}
			cout << s[idx] << cnt;
			i = idx;
		}
		cout << endl;
	}
}