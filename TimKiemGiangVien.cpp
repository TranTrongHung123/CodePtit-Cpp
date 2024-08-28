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

bool so_sanh(string s, string a){
	for(auto &x : s) x = tolower(x);
	for(auto &x : a) x = tolower(x);
	if(a.find(s) == string::npos) return false;
	return true;
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
	int q;
	cin >> q;
	cin.ignore();
	while(q--){
		string s;
		getline(cin, s);
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":" << endl;
		for(int i = 0; i < n; i++){
			if(so_sanh(s, a[i].ten)){
				cout << a[i].mgv << " " << a[i].ten << " " << chuanhoa(a[i].mon) << endl;
			}
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