#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

// Tim gcd cua 2 so tao boi 2 so P = x lan chu so a va Q = y lan chu so a
// Vi du a = 2, x = 3, y = 2 thi P = 222, Q = 22 
// Goi k = gcd(x,y)
// => gcd(P,Q) = k lan chu so a

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll a, x, y;
		cin >> a >> x >> y;
		for(ll i = 1; i <= __gcd(x,y); i++){
			cout << a;
		}
		cout << endl;
	}
}