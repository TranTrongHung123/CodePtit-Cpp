#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

struct SinhVien{
	string msv = "N20DCCN001";
	string ten, lop, ngay;
	double gpa;
};

string chuanhoa(string s){
	if(s[1] == '/'){
		s = "0" + s;
	}
	if(s[4] == '/'){
		s.insert(3, "0");
	}
	return s;
}

void nhapThongTinSV(SinhVien &x){
	getline(cin, x.ten);
	cin >> x.lop >> x.ngay >> x.gpa;
}

void inThongTinSV(SinhVien x){
	cout << x.msv << "	" << x.ten << "	" << x.lop << "	" << chuanhoa(x.ngay) << "	" << fixed << setprecision(2) << x.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}