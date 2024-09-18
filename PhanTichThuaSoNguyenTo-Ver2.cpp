#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

vector<ll> prime;
vector<bool> is_prime(1e7, true);

void sieve(){
	is_prime[0] = is_prime[1] = false;
	for(ll i = 2; i*i <= 1e7; i++){
		if(is_prime[i]){
			prime.push_back(i);
			for(ll j = i*i; j <= 1e7; j += i){
				is_prime[j] = false;
			}
		}
	}
	ll sqrtn = sqrt(1e7);
	for(ll i = sqrtn + 1; i <= 1e7; i++){
		if(is_prime[i]){
			prime.push_back(i);
		}
	}
}

map<ll,ll> PhanTich(ll n){
	map<ll,ll> res;
	for(ll p : prime){
		if(p * p > n){
			break;
		}
		while(n % p == 0){
			++res[p];
			n /= p;
		}
	}
	if(n > 1){
		++res[n];
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sieve();
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		map<ll,ll> res = PhanTich(n);
		for(auto x : res){
			cout << x.first << " " << x.second << endl;
		}		
	}
}

//░░░░░░░░░░░░░░░░░░░░░░█████████
//░░███████░░░░░░░░░░███▒▒▒▒▒▒▒▒███
//░░█▒▒▒▒▒▒█░░░░░░░███▒▒▒▒▒▒▒▒▒▒▒▒▒███
//░░░█▒▒▒▒▒▒█░░░░██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░░░░█▒▒▒▒▒█░░░██▒▒▒▒▒██▒▒▒▒▒▒██▒▒▒▒▒███
//░░░░░█▒▒▒█░░░█▒▒▒▒▒▒████▒▒▒▒████▒▒▒▒▒▒██
//░░░█████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░░░█▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒██
//░██▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒██▒▒▒▒▒▒▒▒▒▒██▒▒▒▒██
//██▒▒▒███████████▒▒▒▒▒██▒▒▒▒▒▒▒▒██▒▒▒▒▒██
//█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒████████▒▒▒▒▒▒▒██
//██▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░█▒▒▒███████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░██▒▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█
//░░████████████░░░█████████████████