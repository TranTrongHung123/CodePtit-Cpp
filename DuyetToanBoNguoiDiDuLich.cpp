#include <bits/stdc++.h>
using namespace std;

int n, min_price = INT_MAX;
int a[100][100];
int X[100], mark[100];
vector<pair<int,string>> res;

void Try(int i){
	for(int j = 2; j <= n; j++){
		if(mark[j] == 0){
			mark[j] = 1;
			X[i] = j;
			if(i == (n-1)){
				int tmp = a[X[n-1]][1];
				string str = "1->";
				for(int l = 1; l <= n-1; l++){
					str += to_string(X[l]);
					str += "->";
					if(l == 1){
						tmp += a[1][X[l]];
					}
					else{
						tmp += a[X[l-1]][X[l]];
					}
				}
				str += "1";
				if(tmp <= min_price){
					min_price = tmp;
					res.push_back({tmp, str});
				}
			}
			else{
				Try(i + 1);
			}
			mark[j] = 0;
		}
	}
}


int main(){
	cout << "Nhap so thanh so phai di qua: ";
	cin >> n;
	cout << "Nhap ma tran chi phi: " << endl;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	Try(1);
	cout << "=> Chi phi nho nhat la: " << min_price << endl;
	cout << "=> Cac duong di thoa man la: ";
	for(auto x : res){
		if(x.first == min_price){
			cout << x.second << endl;
			break;
		}
	}
}