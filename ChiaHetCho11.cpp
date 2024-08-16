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
		ll sum1 = 0, sum2 = 0;
		for(int i = 0; i < s.size(); i++){
			if(i % 2 == 0){
				sum1 += s[i] - '0';
			}
			else{
				sum2 += s[i] - '0';
			}
		}
		if(abs(sum1 - sum2) % 11 == 0){
			cout << "1" << endl;
		}
		else{
			cout << "0" << endl;
		}
	}
}