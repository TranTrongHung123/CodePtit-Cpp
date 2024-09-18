#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

// x^y > y^x => y > x
// Cac truong hop co the xay ra :  
// + x = 0 : Khong co gia tri y nao thoa man nen so cap bang 0
// + x = 1 : Thi y = 0 la gia tri duy nhat thoa man nen so cap la so luong so 0 trong mang Y[]
// + x = 2 : Thi se sai voi y = 2, 3, 4 nen so cap la so luong so 0, 1 va so lon hon 4 trong mang Y[]
// + x = 3 : Thi se sai voi y = 3 nen so cap la so luong so 0, 1, 2 va so luong hon 3 trong Y[]
// + x > 3 : So cap la so luong so 0, 1 va so lon hon x trong Y[]

ll solve(ll X[], ll Y[], ll n, ll m){
	map<ll,ll> mp_y;
	for(ll i = 0; i < m; i++){
		++mp_y[Y[i]];
	}	
	ll count = 0;
	for(ll i = 0; i < n; i++){
		if(X[i] == 0){
			count += 0;
		}
		else if(X[i] == 1){
			count += mp_y[0];
		}
		else if(X[i] == 2){
			count += mp_y[0] + mp_y[1];
			auto it = upper_bound(Y, Y + m, 4);
			if(it != (Y + m)){
				count += m - (it - Y);
			}
		}
		else if(X[i] == 3){
			count += mp_y[0] + mp_y[1] + mp_y[2];
			auto it = upper_bound(Y, Y + m, 3);
			if(it != (Y + m)){
				count += m - (it - Y);
			}			
		}
		else{
			count += mp_y[0] + mp_y[1];
			auto it = upper_bound(Y, Y + m, X[i]);
			if(it != (Y + m)){
				count += m - (it - Y);
			}			
		}
	}
	return count;
}

int main(){
	int TC;
	cin >> TC;
	while(TC--){
		ll n, m;
		cin >> n >> m;
		ll X[n], Y[m];
		for(auto &it : X) cin >> it;
		for(auto &it : Y) cin >> it;
		sort(Y, Y + m);
		cout << solve(X, Y, n, m) << endl;
	}
}

//░░░░░░░░░░░░░░░░░░░░░░█████████
//░░███████░░░░░░░░░░███▒▒▒▒▒▒▒▒███
//░░█▒▒▒▒▒▒█░░░░░░░███▒▒▒▒▒▒▒▒▒▒▒▒▒███
//░░░█▒▒▒▒▒▒█░░░░██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░░░░█▒▒▒▒▒█░░░██▒▒▒▒▒██▒▒▒▒▒▒██▒▒▒▒▒███
//░░░░░█▒▒▒█░░░█▒▒▒▒▒▒████▒▒▒▒████▒▒▒▒▒▒██
//░░░█████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░░░█▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒██
//░██▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒██▒▒▒▒▒▒▒▒▒▒██▒▒▒▒██
//██▒▒▒███████████▒▒▒▒▒██▒▒▒▒▒▒▒▒██▒▒▒▒▒██
//█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒████████▒▒▒▒▒▒▒██
//██▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░█▒▒▒███████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░██▒▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█
//░░████████████░░░█████████████████