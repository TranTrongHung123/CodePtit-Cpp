#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

ll XOR(ll n){ // res = 1 ^ 2 ^ ... ^ n
	if(n % 4 == 0) return n;
	if(n % 4 == 1) return 1;
	if(n % 4 == 2) return n + 1;
	return 0;
}

int main(){
	ll A, B;
	cin >> A >> B;
	if(A > B){
		swap(A, B);
	}
	ll res = XOR(B) ^ XOR(A - 1);
	cout << res;
}