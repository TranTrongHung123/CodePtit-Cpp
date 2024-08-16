#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	int a[n][3];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++){
			cin >> a[i][j];
		}
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
		int cnt_1 = 0, cnt_0 = 0;
		for(int j = 0; j < 3; j++){
			if(a[i][j] == 1){
				++cnt_1;
			}
			else{
				++cnt_0;
			}
		}
		if(cnt_1 > cnt_0){
			++cnt;
		}
	}	
	cout << cnt;
}