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
		char c;
		cin >> c;
		if(islower(c)){
			c = toupper(c);
			cout << c << endl;
		}
		else{
			c = tolower(c);
			cout << c << endl;			
		}
	}
}