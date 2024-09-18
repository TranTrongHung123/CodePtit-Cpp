#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

// Catalan(n) = (2n)! / (n! * (n+1)!) = (2n * (2n-1) * ... * (n+2)) / n!

string Tich(string s, int n){
	string res(s.size(), '0');
	int carry = 0;
	for(int i = s.size()-1; i >= 0; i--){
		int x = (s[i] - '0') * n + carry;
		res[i] = (x % 10) + '0';
		carry = x / 10;
	}
	if(carry){
		res = to_string(carry) + res;
	}
	return res;
}

string Catalan(short int n){
	vector<int> Tu_So;
	for(int i = n+2; i <= 2*n; i++){
		Tu_So.push_back(i);
	}
	for(int i = 2; i <= n; i++){
		int tmp = i;
		for(int j = 0; j < Tu_So.size(); j++){
			int gcd = __gcd(Tu_So[j], tmp);
			tmp /= gcd;
			Tu_So[j] /= gcd;
			if(tmp != 1){
				continue;
			}
			else{
				break;
			}
		}
	}
	string res = "1";
	for(auto x : Tu_So){
		res = Tich(res, x);
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	short int n;
	cin >> n;
	cout << Catalan(n + 1);
}

//░░░░░░░░░░░░░░░░░░░░░░█████████
//░░███████░░░░░░░░░░███▒▒▒▒▒▒▒▒███
//░░█▒▒▒▒▒▒█░░░░░░░███▒▒▒▒▒▒▒▒▒▒▒▒▒███
//░░░█▒▒▒▒▒▒█░░░░██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░░░░█▒▒▒▒▒█░░░██▒▒▒▒▒██▒▒▒▒▒▒██▒▒▒▒▒███
//░░░░░█▒▒▒█░░░█▒▒▒▒▒▒████▒▒▒▒████▒▒▒▒▒▒██
//░░░█████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░░░█▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒██
//░██▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒██▒▒▒▒▒▒▒▒▒▒██▒▒▒▒██
//██▒▒▒███████████▒▒▒▒▒██▒▒▒▒▒▒▒▒██▒▒▒▒▒██
//█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒████████▒▒▒▒▒▒▒██
//██▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░█▒▒▒███████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░██▒▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█
//░░████████████░░░█████████████████