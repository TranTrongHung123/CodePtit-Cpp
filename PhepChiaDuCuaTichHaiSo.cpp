#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

ll tich(ll a, ll b, ll c){ // (a * b) % c
	if(b == 0){
		return 0;
	}
	ll res = tich(a, b/2, c) % c;
	if(b % 2 == 1){
		return (res % c + res % c + a % c) % c;
	}
	else{
		return (res % c + res % c) % c;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll a, b, c;
		cin >> a >> b >> c;
		cout << tich(a,b,c) << endl;
	}
}