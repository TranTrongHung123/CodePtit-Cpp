#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

string chuanhoa(string s){
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
	return s;
}

void solve(string s){
	stringstream kk(s);
	string word;
	vector<string> vt;
	while(kk >> word){
		vt.push_back(word);
	}
	vt[0][0] = toupper(vt[0][0]);
	for(int i = 0; i < vt.size(); i++){
		cout << vt[i];
		if(i != (vt.size()-1)){
			cout << " ";
		}
	}
	cout << endl;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	vector<string> vt;
	while(cin >> s){
		vt.push_back(chuanhoa(s));
	}
	string x = "";
	for(auto c : vt){
		x += c + " ";
	}
	for(int i = 0; i < x.size(); i++){
		if(x[i] == '!' || s[i] == '?'){
			x[i] = '.';
		}
	}
	stringstream ss(x);
	string token;
	while(getline(ss, token, '.')){
		solve(token);
	}
}