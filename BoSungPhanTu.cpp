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
		int n;
		cin >> n;
		int a[n];
		map<int,int> mp;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			++mp[a[i]];
		}
		int x = *min_element(a, a + n);
		int y = *max_element(a, a + n);
		int cnt = 0;
		for(int i = x; i <= y; i++){
			if(mp[i] == 0){
				++cnt;
			}
		}
		cout << cnt << endl;
	}
}