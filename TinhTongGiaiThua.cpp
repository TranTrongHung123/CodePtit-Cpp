#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

ll giaithua(ll n){
	ll res = 1;
	for(ll i = 1; i <= n; i++){
		res *= i;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n;
	cin >> n;
	ll s = 0;
	for(ll i = 1; i <= n; i++){
		s += giaithua(i);
	}
	cout << s << endl;
}