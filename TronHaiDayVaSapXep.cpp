#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll n, m;
		cin >> n >> m;
		ll a[n], b[m];
		for(auto &x : a){
			cin >> x;
		}
		for(auto &x : b){
			cin >> x;
		}
		sort(a, a + n);
		sort(b, b + m);
		ll i = 0, j = 0;
		while(i < n && j < m){
			if(a[i] > b[j]){
				cout << b[j] << " ";
				++j;
			}
			else{
				cout << a[i] << " ";
				++i;
			}
		}	
		while(i < n){
			cout << a[i] << " ";
			++i;
		}
		while(j < m){
			cout << b[j] << " ";
			++j;
		}
		cout << endl;
	}
}