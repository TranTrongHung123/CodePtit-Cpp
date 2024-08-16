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
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for(auto &x : a){
			cin >> x;
		}
		for(int i = 0; i < n; i++){
			if(a[i] == k){
				cout << i + 1 << endl;
				break;
			}
		}
	}
}