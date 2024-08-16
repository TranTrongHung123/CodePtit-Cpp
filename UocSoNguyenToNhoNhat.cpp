#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int solve(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return i;
		}
	}
	return n;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 1; i <= n; i++){
			cout << solve(i) << " ";
		}
		cout << endl;
	}
}