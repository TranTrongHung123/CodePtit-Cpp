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
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		int l = 0, r = n-1;
		if(n % 2 == 0){
			while(l <= r){
				cout << a[r] << " " << a[l] << " ";
				++l;
				--r;
			}			
		}
		else{
			while(l < r){
				cout << a[r] << " " << a[l] << " ";
				++l;
				--r;
			}
			cout << a[l];
		}
		cout << endl;
	}
}