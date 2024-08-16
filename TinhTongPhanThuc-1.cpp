#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	double s = 0;
	for(int i = 1; i <= n; i++){
		s += 1.0 * 1 / i;
	}
	cout << fixed << setprecision(4) << s << endl;
}