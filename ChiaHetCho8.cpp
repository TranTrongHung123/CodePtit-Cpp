#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int find(string s, int k){ // Tinh so luong xau con chia het cho k
	int cnt = 0;
	for(int i = 0; i < s.size(); i++){
		int res = 0;
		for(int j = i; j < s.size(); j++){
			res = (10 * res + (s[j] - '0')) % k;
			if(res == 0){
				++cnt;
			}
		}
	}
	return cnt;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << find(s,8) - find(s,24) << endl;
	}
}