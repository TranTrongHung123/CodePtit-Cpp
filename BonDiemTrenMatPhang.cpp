#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

struct TD{
	ll x, y, z;	
};

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		TD a, b, c, d;
		cin >> a.x >> a.y >> a.z >> b.x >> b.y >> b.z >> c.x >> c.y >> c.z >> d.x >> d.y >> d.z;
		TD ab, ac;
		ab.x = b.x - a.x; ab.y = b.y - a.y; ab.z = b.z - a.z;
		ac.x = c.x - a.x; ac.y = c.y - a.y; ac.z = c.z - a.z;
		ll ans = (ab.y * ac.z - ab.z * ac.y) * (a.x - d.x) + (ab.z * ac.x - ab.x * ac.z) * (a.y - d.y) + (ab.x * ac.y - ab.y * ac.x) * (a.z - d.z);
		if(ans == 0){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}