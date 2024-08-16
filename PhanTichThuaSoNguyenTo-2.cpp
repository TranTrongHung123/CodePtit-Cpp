#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

void solve(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			int degree = 0;
			while(n % i == 0){
				++degree;
				n /= i;
			}
			cout << i << " " << degree << endl;
		}
	}
	if(n != 1){
		cout << n << " " << 1 << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	solve(n);
}