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
		int k;
		cin >> s >> k;
		if(s.size() < 26){
			cout << "0" << endl;
		}
		else{
			set<char> st;
			for(auto x : s){
				st.insert(x);
			}
			if((st.size() + k) == 26){
				cout << "1" << endl;
			}
			else{
				cout << "0" << endl;
			}
		}
	}
}