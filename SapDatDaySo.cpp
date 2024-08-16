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
		ll a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		for(int i = 0; i < n; i++){
			auto x = binary_search(a, a + n, i);
			if(x == 0){
				cout << "-1" << " ";
			}
			else{
				cout << i << " ";
			}
		}
		cout << endl;
	}
}