#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int solve(int n){
	int cnt = 0;
	for(int i = 1; i <= sqrt(n); i++){
		if(n % i == 0){
			if(i % 2 == 0){
				++cnt;
			}
			if(i != n/i){
				if((n/i) % 2 == 0){
					++cnt;
				}
			}
		}
	}
	return cnt;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << solve(n) << endl;
	}
}