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
		int a[n], b[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[i] = a[i];
		}		
		sort(b, b + n);
		for(int i = 0; i < n; i++){
			auto it = upper_bound(b, b + n, a[i]);
			if(it == (b + n)){
				cout << "_ ";
			}
			else{
				cout << *it << " ";
			}
		}
		cout << endl;
	}
}