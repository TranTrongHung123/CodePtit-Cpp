#include <bits/stdc++.h>
#define ll long long
#define endl "\n";
using namespace std;

int X[100], visited[100], a[100][100];
int n, min_price = INT_MAX, cur_price = 0, res = INT_MAX;
vector<pair<int,string>> ans;


void Try(int i){
	for(int j = 2; j <= n; j++){
		if(visited[j] == 0){
			X[i] = j;
			visited[j] = 1;
			cur_price += a[X[i-1]][X[i]];
			if(i == (n-1)){
				res = min(res, cur_price + a[X[i]][1]);
				string tmp = "1->";
				for(int l = 1; l <= n-1; l++){
					tmp += to_string(X[l]);
					tmp += "->";
				}
				tmp += "1";
				ans.push_back({res, tmp});
			}
			else if(cur_price + min_price * (n-i+1) < res){
				Try(i + 1);
			}
			visited[j] = 0;
			cur_price -= a[X[i-1]][X[i]];
		}
	}
}

int main(){	
	X[0] = 1;
	cout << "Nhap vao so thanh pho: ";
	cin >> n;
	cout << "Nhap vao ma tran chi phi: " << endl;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
			if(i != j){
				min_price = min(min_price, a[i][j]);
			}
		}
	}
	Try(1);
	cout << "Chi phi thap nhat la: " << res << endl;
	for(auto x : ans){
		if(x.first == res){
			cout << x.second << endl;
			break;
		}
	}
}