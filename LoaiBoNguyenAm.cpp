#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	cin >> s;
	for(auto &x : s){
		x = tolower(x);
	}
	for(auto x : s){
		if(x != 'u' && x != 'e' && x != 'y' && x != 'o' && x != 'a' && x != 'i'){
			cout << "." << x;
		}
	}	
}