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
		double x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		double a = pow(x1 - x2, 2);
		double b = pow(y1 - y2, 2);
		double s = sqrt(a + b);
		cout << fixed << setprecision(4) << s << endl;	
	}
}