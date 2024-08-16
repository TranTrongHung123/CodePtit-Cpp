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

int check1(int n){
	while(n >= 10){
		if((n/10)%10 >= n%10){
			return false;
		}
		n /= 10;
	}
	return true;
}

int check2(int n){
	while(n >= 10){
		if((n/10)%10 <= n%10){
			return false;
		}
		n /= 10;
	}
	return true;
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int l = pow(10, n-1);
		int r = pow(10, n) - 1;
		int cnt = 0;
		for(int i = l; i <= r; i++){
			if((check1(i) || check2(i)) && prime(i)){
				++cnt;
			}
		}
		cout << cnt << endl;
	}
}