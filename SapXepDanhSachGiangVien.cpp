#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

struct GV{
	string ten, mon, mgv;	
};

string chuanhoa(string s){
	for(auto &x : s) x = toupper(x);
	stringstream ss(s);
	string token;
	vector<string> vt;
	while(ss >> token){
		vt.push_back(token);
	}
	string tmp = "";
	for(int i = 0; i < vt.size(); i++){
		tmp += string(1, vt[i][0]);
	}
	return tmp;
}

bool cmp(GV a, GV b){
	int idx1 = 0, idx2 = 0;
	for(int i = a.ten.size()-1; i >= 0; i--){
		if(a.ten[i] == ' '){
			idx1 = i;
			break;
		}
	}
	for(int i = b.ten.size()-1; i >= 0; i--){
		if(b.ten[i] == ' '){
			idx2 = i;
			break;
		}
	}
	string tmp1 = a.ten.substr(idx1 + 1);
	string tmp2 = b.ten.substr(idx2 + 1);
	if(tmp1 == tmp2) return a.mgv < b.mgv;
	return tmp1 < tmp2;	
}

int main(){
	int n;
	cin >> n;
	scanf("\n");
	GV a[n];
	for(int i = 0; i < n; i++){
		string tmp = to_string(i + 1);
		a[i].mgv = "GV" + string(2 - tmp.size(), '0') + tmp;
		getline(cin, a[i].ten);
		getline(cin, a[i].mon);
	}
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		cout << a[i].mgv << " " << a[i].ten << " " << chuanhoa(a[i].mon) << endl;
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