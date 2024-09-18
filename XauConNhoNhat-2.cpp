#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		map<char,int> mp;
		for(auto x : s){
			++mp[x];
		}
		int len = mp.size(); // So luong ki tu khac nhau trong s
		int mark[256] = {0};
		int cnt = 0, left = 0;
		int res = 1e9;
		for(int i = 0; i < s.size(); i++){
			++mark[s[i]];
			if(mark[s[i]] == 1){
				++cnt;
			}
			if(cnt == len){
				while(mark[s[left]] > 1){
					--mark[s[left]];
					++left;
				}
				res = min(res, i - left + 1);
			}
		}
		cout << res << endl;
	}
}