#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

bool check(int n){
	int cnt = 0, d = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			++cnt;
			while(n % i == 0){
				++d;
				n /= i;
			}
		}
	}
	if(n != 1){
		++cnt;
		++d;
	}
	if(cnt == 3 && d == 3){
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
		if(check(n)){
			cout << 1 << endl;
		}
		else{
			cout << 0 << endl;
		}
	}
}