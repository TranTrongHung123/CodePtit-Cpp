//#include <bits/stdc++.h>
//#define endl "\n"
//using namespace std;
//typedef long long ll;
//const int mod = 1e9 + 7;
//
//string chuanhoa(string s){
//	if(s[1] == '/'){
//		s = "0" + s;
//	}
//	if(s[4] == '/'){
//		s.insert(3, "0");
//	}
//	return s;
//}
//
//struct SinhVien{
//	string msv = "B20DCCN001";
//	string ten, lop, ngay;
//	double gpa;
//	void nhap(){
//		getline(cin, ten);
//		cin >> lop >> ngay >> gpa;		
//	}
//	void xuat(){
//		cout << msv << " " << ten << " " << lop << " " << chuanhoa(ngay) << " " << fixed << setprecision(2) << gpa;
//	}
//};
//
//int main(){
//    SinhVien a;
//    a.nhap();
//    a.xuat();
//    return 0;
//}

#include <bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string Ten, Lop, NgaySinh, Msv;
		double gpa;
	public:
		SinhVien(){
			Msv = "B20DCCN001";
			Ten = "";
			Lop = "";
			NgaySinh = "";
			gpa = 0;
		}
		void setNgaySinh(string NgaySinh);
		void nhap();
		void xuat();
};

void SinhVien::setNgaySinh(string NgaySinh){
	if(NgaySinh[1] == '/'){
		NgaySinh = "0" + NgaySinh;
	}
	if(NgaySinh[4] == '/'){
		NgaySinh.insert(3, "0");
	}
	this->NgaySinh = NgaySinh;	
}

void SinhVien::nhap(){
	getline(cin, Ten);
	getline(cin, Lop);
	getline(cin, NgaySinh);
	cin >> gpa;
}

void SinhVien::xuat(){
	setNgaySinh(NgaySinh);
	cout << Msv << " " << Ten << " " << Lop << " " << NgaySinh << " " << fixed << setprecision(2) << gpa;	
}

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
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