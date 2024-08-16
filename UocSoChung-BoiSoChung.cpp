#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

ll lcm(ll a, ll b){
	return a / __gcd(a,b) * b;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll a, b;
		cin >> a >> b;
		cout << lcm(a,b) << " " << __gcd(a,b) << endl;
	}
}