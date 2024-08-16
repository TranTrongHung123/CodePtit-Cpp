#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

ll result(ll n, ll k){
	ll d = n / k; // So cum tu 0 den k - 1
	ll r = n % k; // Phan du khong tao thanh cum
	ll sum1 = (k-1) * k / 2; // Tong tu 0 den k-1
	ll sum2 = (r + 1) * r / 2; // Tong cua phan du khong tao thanh cum
	return d * sum1 + sum2;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		cout << result(n,k) << endl;
	}
}