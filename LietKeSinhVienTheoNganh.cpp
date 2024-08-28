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

string chuanhoa(string s){
	for(auto &x : s){
		x = toupper(x);
	}
	return s;
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
		if(s == "Ke toan"){
			cout << "DANH SACH SINH VIEN NGANH " << chuanhoa(s) << ":" << endl;
			for(int i = 0; i < n; i++){
				if(a[i].mvs.find("DCKT") != string::npos){
					cout << a[i].mvs << " " << a[i].ten << " " << a[i].lop << " " << a[i].email << endl;
				}
			}			
		}
		else if(s == "Cong nghe thong tin"){
			cout << "DANH SACH SINH VIEN NGANH " << chuanhoa(s) << ":" << endl;
			for(int i = 0; i < n; i++){
				if(a[i].mvs.find("DCCN") != string::npos && a[i].lop[0] != 'E'){
					cout << a[i].mvs << " " << a[i].ten << " " << a[i].lop << " " << a[i].email << endl;
				}
			}			
		}
		else if(s == "An toan thong tin"){
			cout << "DANH SACH SINH VIEN NGANH " << chuanhoa(s) << ":" << endl;
			for(int i = 0; i < n; i++){
				if(a[i].mvs.find("DCAT") != string::npos && a[i].lop[0] != 'E'){
					cout << a[i].mvs << " " << a[i].ten << " " << a[i].lop << " " << a[i].email << endl;
				}
			}			
		}
		else if(s == "Vien thong"){
			cout << "DANH SACH SINH VIEN NGANH " << chuanhoa(s) << ":" << endl;
			for(int i = 0; i < n; i++){
				if(a[i].mvs.find("DCVT") != string::npos){
					cout << a[i].mvs << " " << a[i].ten << " " << a[i].lop << " " << a[i].email << endl;
				}
			}			
		}
		else{
			cout << "DANH SACH SINH VIEN NGANH " << chuanhoa(s) << ":" << endl;
			for(int i = 0; i < n; i++){
				if(a[i].mvs.find("DCDT") != string::npos){
					cout << a[i].mvs << " " << a[i].ten << " " << a[i].lop << " " << a[i].email << endl;
				}
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