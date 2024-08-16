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
		int n;
		string s;
		cin >> n >> s;
		string tmp = "";
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '0' || s[i] == '1') continue;
			else if(s[i] == '4'){ // 4! = 2!.2!.3!
				tmp += "223";
			}
			else if(s[i] == '6'){ // 6! = 5!.3!
				tmp += "53";
			}
			else if(s[i] == '8'){ // 8! = 2!.2!.2!.7!
				tmp += "2227";
			}
			else if(s[i] == '9'){ // 9! = 7!.3!.2!.2!
				tmp += "7332";
			}
			else{
				tmp += string(1, s[i]);
			}
		}
		sort(tmp.begin(), tmp.end(), greater<char>());
		cout << tmp << endl;
	}
}