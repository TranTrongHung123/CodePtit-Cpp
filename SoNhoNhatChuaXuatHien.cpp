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
		int n;
		cin >> n;
		int a[n];
		map<int,int> mp;
		for(auto &x : a){
			cin >> x;
			++mp[x];
		}
		for(int i = 1; i <= 1000000; i++){
			if(mp[i] == 0){
				cout << i << endl;
				break;
			}
		}
	}
}