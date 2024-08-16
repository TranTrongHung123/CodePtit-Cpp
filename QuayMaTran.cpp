#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main(){
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
		int h1 = 0, h2 = n-1, c1 = 0, c2 = m-1;
		int cnt = 0;
		while(h1 <= h2 && c1 <= c2){
			int tmp;
			if(c1 == m/2){
				tmp = a[h1][c1];
			}
			else{
				tmp = a[h1+1][c1];
			}
			for(int i = c1; i <= c2; i++){
				int t = a[h1][i];
				a[h1][i] = tmp;
				tmp = t;
				++cnt;
			}
			++h1;
			if(cnt == n*m) break;
			for(int i = h1; i <= h2; i++){
				int t = a[i][c2];
				a[i][c2] = tmp;
				tmp = t;
				++cnt;
			}
			--c2;
			if(cnt == n*m) break;
			for(int i = c2; i >= c1; i--){
				int t = a[h2][i];
				a[h2][i] = tmp;
				tmp = t;
				++cnt;				
			}
			--h2;
			if(cnt == n*m) break;
			for(int i = h2; i >= h1; i--){
				int t = a[i][c1];
				a[i][c1] = tmp;
				tmp = t;
				++cnt;				
			}	
			++c1;
			if(cnt == n*m) break;		
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cout << a[i][j] << " ";
			}
		}	
		cout << endl;	
	}		
}