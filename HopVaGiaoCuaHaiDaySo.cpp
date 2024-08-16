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
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		for(auto &x : a){
			cin >> x;
		}
		for(auto &x : b){
			cin >> x;
		}
		map<int,int> hop, giao;
		for(auto x : a){
			hop[x] = 1;
			giao[x] = 1;
		}		
		for(auto x : b){
			hop[x] = 1;
			if(giao[x] == 1){
				giao[x] = 2;
			}
		}
		for(auto x : hop){
			cout << x.first << " ";
		}
		cout << endl;
		for(auto x : giao){
			if(x.second == 2){
				cout << x.first << " ";
			}
		}
		cout << endl;		
	}
}