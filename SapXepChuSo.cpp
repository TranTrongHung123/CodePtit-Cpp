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
		set<int> st;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			if(x == 0) st.insert(0);
			else{
				while(x){
					st.insert(x % 10);
					x /= 10;
				}
			}	
		}
		for(auto x : st){
			cout << x << " ";
		}	
		cout << endl;
	}
}