#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int a, m;
		cin >> a >> m;
		int ok = 0;
		for(int i = 0; i <= m-1; i++){
			if((a * i % m) == 1){
				cout << i << endl;
				ok = 1;
				break;
			}
		}
		if(ok == 0){
			cout << "-1" << endl;
		}
	}
}