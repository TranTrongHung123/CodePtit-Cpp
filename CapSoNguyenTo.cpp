#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return n>1;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		bool ok = false;
		for(int i = 2; i <= n/2; i++){
			if(prime(i) && prime(n-i)){
				cout << i << " " << n-i << endl;
				ok = true;
				break;
			}
		}
		if(ok == false){
			continue;
		}
	}
}