#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int mark[100005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int m, n, a, b;
		cin >> m >> n >> a >> b;
		fill(mark + m, mark + n + 1, 0);
		int x = max(m, (m + a - 1) / a * a);
		for(int i = x; i <= n; i += a){
			mark[i] = 1;
		}
		int y = max(m, (m + b - 1) / b * b);
		for(int i = y; i <= n; i += b){
			mark[i] = 1;
		}
		int cnt = 0;	
		for(int i = m; i <= n; i++){
			if(mark[i] == 1){
				++cnt;
			}
		}
		cout << cnt << endl;
	}
}