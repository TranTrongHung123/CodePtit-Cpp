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
			a[i] = i+1;
		}
		do{
			for(int i = 0; i < n; i++){
				cout << a[i];
			}			
			cout << " ";
		}while(next_permutation(a, a+n));
		cout << endl;
	}
}