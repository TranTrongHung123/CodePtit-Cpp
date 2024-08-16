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
		int a[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		int h1 = 0, c1 = 0, h2 = n-1, c2 = m-1;
		int cnt = 0, pos = n*m;
		while(h1 <= h2 && c1 <= c2){
			for(int i = c1; i <= c2; i++){
				cout << a[h1][i] << " ";
				++cnt;
			}
			++h1;
			if(cnt == pos) break;
			for(int i = h1; i <= h2; i++){
				cout << a[i][c2] << " ";
				++cnt;
			}	
			--c2;
			if(cnt == pos) break;
			for(int i = c2; i >= c1; i--){
				cout << a[h2][i] << " ";
				++cnt;				
			}
			--h2;
			if(cnt == pos) break;
			for(int i = h2; i >= h1; i--){
				cout << a[i][c1] << " ";
				++cnt;					
			}	
			++c1;
			if(cnt == pos) break;
		}
		cout << endl;		
	}		
}