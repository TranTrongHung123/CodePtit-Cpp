#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

char a[50][50];

bool check(int h1, int c1, int h2, int c2){
	if((h2 - h1) != (c2 - c1)) return false;
	for(int i = h1; i <= h2; i++){
		for(int j = c1; j <= c2; j++){
			if(i == h1 || i == h2 || j == c1 || j == c2){
				if(a[i][j] != 'X'){
					return false;
				}
			}
		}
	}
	return true;
}

int main(){
	int TC;
	cin >> TC;
	while(TC--){
		int n;
		cin >> n;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		int res = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				for(int h = i; h < n; h++){
					for(int k = j; k < n; k++){
						if(check(i,j,h,k)){
							res = max(res, k + 1 - j);
						}
					}
				}
			}
		}
		cout << res << endl;
	}
}