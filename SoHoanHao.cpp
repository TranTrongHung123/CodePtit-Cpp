#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

bool check(ll n){
	if(n > 1e12){
		return false;
	}
	ll tmp = n, sum = 1;
	for(ll i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			sum += i;
			if(i != (n/i)){
				sum += n/i;
			}
		}
	}
	if(sum == tmp){
		return true;
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
		if(check(n)){
			cout << 1 << endl;
		}
		else{
			cout << 0 << endl;
		}
	}
}