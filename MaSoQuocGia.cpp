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
		int len = s.size();
		for(int i = 0; i < len; i++){
			if(s[i] == '0' && s[i+1] == '8' && s[i+2] == '4'){
				s.erase(i,3);
				i = 0;
			}
		}
		cout << s << endl;
	}
}