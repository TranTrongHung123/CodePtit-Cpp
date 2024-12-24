#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int n;
int X[100], dp[100005];
vector<int> res;

void Try(int i){
	for(int j = 1; j <= 3; j++){
		X[i] = j;
		if(i == n){
			string tmp = "";
			for(int k = 1; k <= n; k++){
				tmp += to_string(X[k]);
			}
			res.push_back(stoi(tmp));
		}
		else{
			Try(i + 1);
		}
	}
}

void Sinh(){
	for(int val = 1; val <= 5; val++){
		n = val;
		Try(1);
	}
}

int main(){
	Sinh();	
	
	for(auto x : res){
		dp[x] = 1;
	}
	
	for(int i = 1; i <= 100000; i++){
		for(auto x : res){
			if((i >= x) and (dp[i-x] != 0)){
				if(dp[i]){
					dp[i] = min(dp[i], dp[i-x] + 1);
				}
				else{
					dp[i] = dp[i-x] + 1;
				}
			}
		}
	}
	
	int TC;
	cin >> TC;
	while(TC--){
		int n;
		cin >> n;
		cout << dp[n] << endl;
	}
} 