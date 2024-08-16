#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

char a[15] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
char b[15] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		char x[15];
		for(int i = 0; i < 15; i++){
			cin >> x[i];
		}
		int cnt = 0;
		if(n == 101){
			for(int i = 0; i < 15; i++){
				if(x[i] == a[i]){
					++cnt;
				}
			}
		}
		else{
			for(int i = 0; i < 15; i++){
				if(x[i] == b[i]){
					++cnt;
				}
			}			
		}
		double gpa = 1.0 * 10 * cnt / 15;
		cout << fixed << setprecision(2) << gpa << endl;
	}
}