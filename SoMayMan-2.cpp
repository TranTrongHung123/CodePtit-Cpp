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
		string s;
		cin >> s;
		ll sum = 0;
		for(auto x : s){
			sum += x - '0';
		}
		if(sum % 9 == 0 && sum != 0){
			cout << "1" << endl;
		}
		else{
			cout << "0" << endl;
		}
	}
}