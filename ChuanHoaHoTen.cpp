#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

string chuanhoa(string s){
	for(int i = 0; i < s.size(); i++){
		if(i == 0){
			s[i] = toupper(s[i]);
		}
		else{
			s[i] = tolower(s[i]);
		}
	}	
	return s;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	getline(cin, s);
	stringstream ss(s);
	string token;
	vector<string> vt;
	while(ss >> token){
		vt.push_back(chuanhoa(token));
	}	
	for(int i = 0; i < vt.size() - 1; i++){
		cout << vt[i];
		if(i != vt.size() - 2){
			cout << " ";
		}
		else{
			cout << ", ";
		}
	}
	for(int i = 0; i < vt[vt.size() - 1].size(); i++){
		vt[vt.size() - 1][i] = toupper(vt[vt.size() - 1][i]);
		cout << vt[vt.size() - 1][i];
	}
}