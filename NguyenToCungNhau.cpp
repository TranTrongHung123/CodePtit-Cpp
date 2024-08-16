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
	return n > 1;
}

bool euler(int n){
	int res = n;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			res = res / i * (i-1);
			while(n % i == 0){
				n /= i;
			}
		}
	}
	if(n != 1){
		res = res / n * (n-1);
	}
	if(prime(res)){
		return true;
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(euler(n)){
			cout << 1 << endl;
		}
		else{
			cout << 0 << endl;
		}
	}
}