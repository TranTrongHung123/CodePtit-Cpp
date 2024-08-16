#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

bool check(int n){
	int cnt_c = 0, cnt_l = 0;
	while(n){
		int t = n % 10;
		if(t % 2 == 0){
			++cnt_c;
		}
		else{
			++cnt_l;
		}
		n /= 10;
	}
	if(cnt_c == cnt_l){
		return true;
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	int l = pow(10, n-1);
	int r = pow(10, n) - 1;
	int pos = 0;
	for(int i = l; i <= r; i++){
		if(check(i)){
			cout << i;
			++pos;
			if(pos % 10 != 0){
				cout << " ";
			}
			else{
				cout << endl;
			}
		}
	}
}