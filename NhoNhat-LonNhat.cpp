#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int m, s;
	cin >> m >> s;
	if(s == 0 || (9*m < s)){
		cout << "-1 -1";
	}
	else{
		int lon[105], be[105];
		int s1 = s, s2 = s;
		for(int i = 1; i <= m; i++){
			if(s1 >= 9){
				lon[i] = 9;
				s1 -= 9;
			}
			else{
				lon[i] = s1;
				s1 -= s1;
			}
		}
		s2 -= 1;
		for(int i = m; i >= 1; i--){
			if(s2 >= 9){
				be[i] = 9;
				s2 -= 9;
			}
			else{
				be[i] = s2;
				s2 -= s2;
			}
		}
		be[1] += 1;
		for(int i = 1; i <= m; i++){
			cout << be[i];
		}
		cout << " ";
		for(int i = 1; i <= m; i++){
			cout << lon[i];
		}		
	}
}