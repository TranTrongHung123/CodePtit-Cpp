#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string token;
		vector<string> vt;
		while(ss >> token){
			vt.push_back(token);
		}
		for(int i = vt.size()-1; i >= 0; i--){
			cout << vt[i] << " ";
		}
		cout << endl;
	}	
}