#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

string Sum(string a, string b){
	int len = max(a.size(), b.size());
	while(a.size() < len){
		a = "0" + a;
	}
	while(b.size() < len){
		b = "0" + b;
	}
	if(a < b) swap(a,b);
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	string S = "";
	int carry = 0;
	for(int i = 0; i < len; i++){
		int t = (a[i] - '0') + (b[i] - '0') + carry;
		S += to_string(t % 10);
		carry = t / 10;
	}
	if(carry){
		S += to_string(carry);
	}		
	reverse(S.begin(), S.end());
	return S;
}

bool check(string a, int pos, int len1, int len2){
	string s1 = a.substr(pos, len1);
	string s2 = a.substr(pos + len1, len2);
	string s = Sum(s1, s2);
	if((s.size() + len1 + len2 + pos) > a.size()) return false;
	if(s == a.substr(pos + len1 + len2, s.size())){
		if(pos + len1 + len2 + s.size() == a.size()) return true;
		return check(a, pos + len1, len2, s.size());
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int TC;
	cin >> TC;
	while(TC--){
		string a;
		cin >> a;
		bool ok = true;
		for(int len1 = 1; len1 < a.size(); len1++){
			for(int len2 = 1; len2 <= a.size() - len1; len2++){
				if(check(a, 0, len1, len2)){
					cout << "Yes" << endl;
					ok = false;
					break;
				}
			}
		}
		if(ok){
			cout << "No" << endl;
		}
	}
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