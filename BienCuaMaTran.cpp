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
		int a[n][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(i == 0 || j == 0 || i == n-1 || j == n-1){
					cout << a[i][j] << " ";
				}
				else{
					cout << "  ";
				}
			}
			cout << endl;
		}		
	}
}