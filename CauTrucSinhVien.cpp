#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

struct SinhVien{
	string ten, lop, sinh;
	string msv = "B20DCCN001";
	double gpa;
};

void nhap(SinhVien &A){
	getline(cin, A.ten);
	cin >> A.lop >> A.sinh >> A.gpa;
}

string chuanhoa(string s){
	if(s[1] == '/'){
		s = "0" + s;
	}
	if(s[4] == '/'){
		s.insert(3, "0");
	}
	return s;
}

void in(SinhVien A){
	cout << A.msv << " " << A.ten << " " << A.lop << " " << chuanhoa(A.sinh) << " " << fixed << setprecision(2) << A.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}