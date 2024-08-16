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
		multiset<char> st;
		int sum = 0;
		for(auto x : s){
			if(isdigit(x)){
				sum += x - '0';
			}
			else{
				st.insert(x);
			}
		}
		for(auto x : st){
			cout << x;
		}
		cout << sum << endl;
	}
}