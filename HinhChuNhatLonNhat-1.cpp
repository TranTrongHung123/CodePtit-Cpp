#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int max_erea(int X[], int n){
	int res = 0;
	stack<int> stk;
	int i = 0;
	while(i < n){
		if(stk.empty() || X[i] >= X[stk.top()]){
			stk.push(i);
			++i;
		}
		else{
			int cur = stk.top();
			stk.pop();
			if(stk.empty()){
				res = max(res, X[cur] * i);
			}
			else{
				res = max(res, X[cur] * (i - 1 - stk.top()));
			}
		}
	}
	while(!stk.empty()){
		int cur = stk.top();
		stk.pop();
		if(stk.empty()){
			res = max(res, X[cur] * i);
		}
		else{
			res = max(res, X[cur] * (i - 1 - stk.top()));
		}		
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int TC;
	cin >> TC;
	while(TC--){
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		int X[n][m];
		for(int j = 0; j < m; j++){
			X[0][j] = a[0][j];
		}
		for(int i = 1; i < n; i++){
			for(int j = 0; j < m; j++){
				if(a[i][j] == 0){
					X[i][j] = 0;
				}
				else{
					X[i][j] = X[i-1][j] + 1;
				}
			}
		}
		for(int i = 0; i < n; i++){
			sort(X[i], X[i] + m);
		}
		int res = 0;
		for(int i = 0; i < n; i++){
			res = max(res, max_erea(X[i], m));
		}
		cout << res << endl;
	}
}

//░░░░░░░░░░░░░░░░░░░░░░█████████
//░░███████░░░░░░░░░░███▒▒▒▒▒▒▒▒███
//░░█▒▒▒▒▒▒█░░░░░░░███▒▒▒▒▒▒▒▒▒▒▒▒▒███
//░░░█▒▒▒▒▒▒█░░░░██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░░░░█▒▒▒▒▒█░░░██▒▒▒▒▒██▒▒▒▒▒▒██▒▒▒▒▒███
//░░░░░█▒▒▒█░░░█▒▒▒▒▒▒████▒▒▒▒████▒▒▒▒▒▒██
//░░░█████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░░░█▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒██
//░██▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒██▒▒▒▒▒▒▒▒▒▒██▒▒▒▒██
//██▒▒▒███████████▒▒▒▒▒██▒▒▒▒▒▒▒▒██▒▒▒▒▒██
//█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒████████▒▒▒▒▒▒▒██
//██▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░█▒▒▒███████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░██▒▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█
//░░████████████░░░█████████████████