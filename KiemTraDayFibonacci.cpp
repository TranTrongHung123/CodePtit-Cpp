#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

ll f[100];

bool fibo(ll n){
	f[1] = 0;
	f[2] = 1;
	for(int i = 3; i <= 92; i++){
		f[i] = f[i-1] + f[i-2];
	}
	for(int i = 1; i <= 92; i++){
		if(n == f[i]){
			return true;
		}
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(auto x : a){
			if(fibo(x)){
				cout << x << " ";
			}
		}
		cout << endl;
	}
}