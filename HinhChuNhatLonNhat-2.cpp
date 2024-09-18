#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

// https://www.geeksforgeeks.org/largest-rectangular-area-in-a-histogram-using-stack/
// https://www.geeksforgeeks.org/maximum-size-rectangle-binary-sub-matrix-1s/

int Histogram(int X[], int n){
	int res = 0;
	stack<int> stk;
	int i = 0;
	while(i < n){
		if(stk.empty() or X[i] >= X[stk.top()]){
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
				res = max(res, X[cur] * (i - stk.top() - 1));
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
			res = max(res, X[cur] * (i - stk.top() - 1));
		}		
	}
	return res;
}

int main(){
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
		int X[n][m]; // Matrix Histogram
		for(int j = 0; j < m; j++){
			X[0][j] = a[0][j];
		}
		for(int i = 1; i < n; i++){
			for(int j = 0; j < m; j++){
				if(a[i][j]){
					X[i][j] = X[i-1][j] + 1;
				}
				else{
					X[i][j] = 0;
				}
			}
		}
		int max_erea = 0;
		for(int i = 0; i < n; i++){
			int tmp = Histogram(X[i], m);
			max_erea = max(max_erea, tmp);
		}
		cout << max_erea << endl;
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