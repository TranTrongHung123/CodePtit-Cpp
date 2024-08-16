#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

bool cmp(string a, string b){
	string ab = a + b;
	string ba = b + a;
	return ab > ba;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}	
		sort(a, a + n, cmp);
		string s = "";
		for(auto x : a){
			s += x;
		}
		cout << s << endl;
	}
}