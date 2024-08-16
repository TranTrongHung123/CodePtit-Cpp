#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

void solve(ll n){
	for(ll i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				n /= i;
			}
			if(n == 1){
				cout << i;
				return;
			}
		}
	}
	if(n != 1){
		cout << n;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		solve(n);
		cout << endl;
	}
}