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
		int a[n+1];
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		if(prev_permutation(a + 1, a + n + 1)){
			for(int i = 1; i <= n; i++){
				cout << a[i] << " ";
			}			
		}
		else{
			for(int i = n; i >= 1; i--){
				cout << i << " ";
			}
		}
		cout << endl;
	}
}