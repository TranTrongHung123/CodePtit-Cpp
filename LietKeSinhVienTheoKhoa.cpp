#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

struct SinhVien{
	string mvs, ten, lop, email;
};

bool cmp(SinhVien a, SinhVien b){
	if(a.lop == b.lop) return a.mvs < b.mvs;
	return a.lop < b.lop;
}

int main(){
	int n;
	cin >> n;
	cin.ignore();
	SinhVien a[n];
	for(int i = 0; i < n; i++){
		getline(cin, a[i].mvs);
		getline(cin, a[i].ten);
		getline(cin, a[i].lop);
		getline(cin, a[i].email);
	}
	int q;
	cin >> q;
	cin.ignore();
	while(q--){
		string s;
		getline(cin, s);
		cout << "DANH SACH SINH VIEN KHOA " << s << ":" << endl;
		for(int i = 0; i < n; i++){
			if(s.substr(2) == a[i].lop.substr(1,2)){
				cout << a[i].mvs << " " << a[i].ten << " " << a[i].lop << " " << a[i].email << endl;
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