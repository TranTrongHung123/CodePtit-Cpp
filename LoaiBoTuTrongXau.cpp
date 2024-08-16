#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s, t;
	getline(cin, s);
	cin >> t;
	vector<string> vt;
	stringstream ss(s);
	string token;
	while(ss >> token){
		vt.push_back(token);
	}
	for(auto x : vt){
		if(x != t){
			cout << x << " ";
		}
	}
}