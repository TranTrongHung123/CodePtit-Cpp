#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

string chuanhoa(string s){
	if(s[1] == '/'){
		s = "0" + s;
	}
	if(s[4] == '/'){
		s.insert(3, "0");
	}
	return s;
}

struct SinhVien{
	string msv = "B20DCCN001";
	string ten, lop, ngay;
	double gpa;
	void nhap(){
		getline(cin, ten);
		cin >> lop >> ngay >> gpa;		
	}
	void xuat(){
		cout << msv << " " << ten << " " << lop << " " << chuanhoa(ngay) << " " << fixed << setprecision(2) << gpa;
	}
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}