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
		vector<string> vt;
		for(int i = 0; i < s.size(); i++){
			if(isdigit(s[i])){
				string tmp = "";
				while(isdigit(s[i])){
					tmp += string(1, s[i]);
					++i;
				}
				vt.push_back(tmp);
			}
		}
		set<int> st;
		for(auto x : vt){
			st.insert(stoi(x));
		}
		cout << *st.rbegin() << endl;
	}
}