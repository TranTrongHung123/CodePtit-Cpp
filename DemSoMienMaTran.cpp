#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

int n, m;
int a[105][105];

void Try(int i, int j){
	a[i][j] = 0;
	for(int k = 0; k < 8; k++){
		int x1 = i + dx[k];
		int y1 = j + dy[k];
		if(x1 >= 0 && x1 < n && y1 >= 0 && y1 < m && a[x1][y1] == 1){
			Try(x1,y1);
		}
	}
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}	
		int cnt = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(a[i][j] == 1){
					++cnt;
					Try(i,j);
				}
			}
		}
		cout << cnt << endl;		
	}
}