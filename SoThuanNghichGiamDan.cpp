#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

bool check(string s){
	if(s.size() == 1){
		return false;
	}
	int l = 0, r = s.size()-1;
	while(l < r){
		if(s[l] != s[r]) return false;
		++l;
		--r;
	}
	return true;
}

bool cmp(pair<string,int> a, pair<string,int> b){
	if(a.first.size() != b.first.size()){
		return a.first.size() > b.first.size();
	}
	return a.first > b.first;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	map<string,int> mp;
	while(cin >> s){
		if(check(s)){
			++mp[s];
		}
	}
	vector< pair<string,int> > vt;
	for(auto x : mp){
		vt.push_back(x);
	}
	sort(vt.begin(), vt.end(), cmp);
	for(int i = 0; i < vt.size(); i++){
		cout << vt[i].first << " " << vt[i].second << endl;
	}
}