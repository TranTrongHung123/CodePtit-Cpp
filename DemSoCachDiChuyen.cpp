#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int dx[2] = {1, 0};
int dy[2] = {0, 1};
int a[205][205];
int n, k;
int sum = a[1][1], cnt = 0;

void Try(int i, int j){
	if(i == n && j == n){
		if(sum == k){
			++cnt;
		}
	}
	for(int k = 0; k < 2; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 1 && j1 >= 1 && i1 <= n && j1 <= n){
			sum += a[i1][j1];
			Try(i1,j1);
			sum -= a[i1][j1];
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				cin >> a[i][j];
			}
		}
		Try(1,1);
		cout << cnt << endl;
	}
}