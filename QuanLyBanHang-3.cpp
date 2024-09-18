#include <bits/stdc++.h>
#include<fstream>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7; 

class KhachHang;
class MatHang;
class HoaDon;
ifstream in1("KH.in"), in2("MH.in"), in3("HD.in");

vector<string> vt;
map<string,KhachHang> KH;
map<string,MatHang> MH;

int cnt = 0, idx;

class KhachHang{
	public:
		string MaKhachHang, TenKhachHang, GioiTinh, NgaySinh, DiaChi;
		friend void NhapKH();
};

KhachHang dskh[505];

void NhapKH(){
	int n = stoi(vt[cnt++]);
	for(int i = 0; i < n; i++){
		string id = to_string(i + 1);
		dskh[i].MaKhachHang = "KH" + string(3 - id.size(), '0') + id;
		dskh[i].TenKhachHang = vt[cnt++];
		dskh[i].GioiTinh = vt[cnt++];
		dskh[i].NgaySinh = vt[cnt++];
		dskh[i].DiaChi = vt[cnt++];
		KH[dskh[i].MaKhachHang] = dskh[i];
	}
}

class MatHang{
	public:
		string MaMatHang, TenMatHang, DonVi;
		ll GiaMua, GiaBan;
		friend void NhapMH();
};

MatHang dsmh[505];

void NhapMH(){
	int m = stoi(vt[cnt++]);
	for(int i = 0; i < m; i++){
		string id = to_string(i + 1);
		dsmh[i].MaMatHang = "MH" + string(3 - id.size(), '0') + id;
		dsmh[i].TenMatHang = vt[cnt++];
		dsmh[i].DonVi = vt[cnt++];
		dsmh[i].GiaMua = stoll(vt[cnt++]);
		dsmh[i].GiaBan = stoll(vt[cnt++]);
		MH[dsmh[i].MaMatHang] = dsmh[i];
	}
}

class HoaDon{
	public:
		string MaHoaDon, Khach_Hang, Mat_Hang;
		ll SoLuong;
		friend void NhapHD();
		friend void XuatHD();
};

HoaDon dshd[505];

void NhapHD(){
	int k = stoi(vt[cnt++]);
	idx = k;
	for(int i = 0; i < k; i++){
		string id = to_string(i + 1);
		dshd[i].MaHoaDon = "HD" + string(3 - id.size(), '0') + id;
		dshd[i].Khach_Hang = vt[cnt++];
		dshd[i].Mat_Hang = vt[cnt++];
		dshd[i].SoLuong = stoll(vt[cnt++]);
	}
}

int main(){
	string pos;
	while(getline(cin, pos)){
		vt.push_back(pos);
	}
	while(getline(cin, pos)){
		vt.push_back(pos);
	}
	while(cin >> pos){
		vt.push_back(pos);
	}
	for(int i = 0; i < idx; i++){
		cout << dshd[i].MaHoaDon << " ";
		KhachHang x = KH[dshd[i].Khach_Hang];
		cout << x.TenKhachHang << " " << x.DiaChi << " ";
		MatHang y = MH[dshd[i].Mat_Hang];
		cout << y.TenMatHang << " " << y.DonVi << " " << y.GiaMua << " " << y.GiaBan << " " << dshd[i].SoLuong << " " << y.GiaBan * dshd[i].SoLuong << endl;
	}
}