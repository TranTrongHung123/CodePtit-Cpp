//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//
//class KhachHang{
//	public:
//		string MaKH, TenKH, GioiTinh, NgaySinh, DiaChi;
//};
//
//class MatHang{
//	public:
//		string MaMH, TenMH, DonVi;
//		ll GiaMua, GiaBan;
//};
//
//class HoaDon{
//	public:
//		string MaHD, KH, MH;
//		ll SoLuong;
//};
//
//int main(){
//	ifstream in1, in2, in3;
//	in1.open("KH.in"); in2.open("MH.in"); in3.open("HD.in");
//	ll n; in1 >> n; in1.ignore();
//	KhachHang a[30];
//	for(ll i = 0; i < n; i++){
//		getline(in1, a[i].TenKH);
//		getline(in1, a[i].GioiTinh);
//		getline(in1, a[i].NgaySinh);
//		getline(in1, a[i].DiaChi);
//		string tmp = to_string(i + 1);
//		a[i].MaKH = "KH" + string(3 - tmp.size(), '0') + tmp;
//	}
//	ll m; in2 >> m;
//	MatHang b[50];
//	for(ll i = 0; i < m; i++){
//		in2.ignore();
//		getline(in2, b[i].TenMH);
//		getline(in2, b[i].DonVi);
//		in2 >> b[i].GiaMua >> b[i].GiaBan;
//		string tmp = to_string(i + 1);
//		b[i].MaMH = "MH" + string(3 - tmp.size(), '0') + tmp;		
//	}
//	ll k; in3 >> k;
//	HoaDon c[110];
//	for(ll i = 0; i < k; i++){
//		in3 >> c[i].KH >> c[i].MH >> c[i].SoLuong;
//		string tmp = to_string(i + 1);
//		c[i].MaHD = "HD" + string(3 - tmp.size(), '0') + tmp;
//	}
//	for(ll i = 0; i < k; i++){
//		ll x = 0;
//		cout << c[i].MaHD << " ";
//		for(ll j = 0; j < n; j++){
//			if(c[i].KH == a[j].MaKH){
//				cout << a[j].TenKH << " " << a[j].DiaChi << " ";
//				break;
//			}
//		}
//		for(ll j = 0; j < m; j++){
//			if(c[i].MH == b[j].MaMH){
//				x = b[j].GiaBan;
//				cout << b[j].TenMH << " " << b[j].DonVi << " " << b[j].GiaMua << " " << b[j].GiaBan << " ";
//				break;
//			}
//		}
//		cout << c[i].SoLuong << " " << x * c[i].SoLuong << endl;
//	}
//	in1.close(); in2.close(); in3.close();
//}


#include <bits/stdc++.h>
#include<fstream>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7; 
class KhachHang; 
class MatHang; 
class HoaDon; 
fstream fileKH("KH.in", ios::in); fstream fileMH("MH.in", ios::in); fstream fileHD("HD.in", ios::in); 

vector<string> v; map<string, KhachHang> KH; map<string, MatHang> MH; 
int n, m, k; int cnt1 = 0; int cnt2 = 0; int cnt3 = 0; int dem = 0; 
class KhachHang{ public: string mkh, name, sex, ns, dc; friend void nhapKH(); }; 
KhachHang dskh[25]; 
void nhapKH(){ string so = v[dem++]; n = stoi(so); for(int i = 0 ; i < n; i++){ cnt1++; if(cnt1 < 10) dskh[i].mkh = "KH00" + to_string(cnt1); else dskh[i].mkh = "KH0" + to_string(cnt1); dskh[i].name = v[dem++]; dskh[i].sex = v[dem++]; dskh[i].ns = v[dem++]; dskh[i].dc = v[dem++]; KH[dskh[i].mkh] = dskh[i]; } } 

class MatHang{ public: string mmh, tmh, donvi; long long mua, ban; friend void nhapMH(); }; 

MatHang dsmh[45]; void nhapMH(){ string so = v[dem++]; m = stoi(so); for(int i = 0; i < m; i++){ cnt2++; if(cnt2 < 10) dsmh[i].mmh = "MH00" + to_string(cnt2); else dsmh[i].mmh = "MH0" + to_string(cnt2); dsmh[i].tmh = v[dem++]; dsmh[i].donvi = v[dem++]; string m1, m2; m1 = v[dem++]; m2 = v[dem++]; dsmh[i].mua = stoi(m1); dsmh[i].ban = stoi(m2); MH[dsmh[i].mmh] = dsmh[i]; } } 

class HoaDon{ public: string mhd, mkh, mmh; int soluong; long long thanhtien; friend void nhapHD(); }; 

HoaDon dshd[105]; void nhapHD(){ string so = v[dem++]; k = stoi(so); for(int i = 0; i < k; i++){ cnt3++; if(cnt3 < 10) dshd[i].mhd = "HD00" + to_string(cnt3); else dshd[i].mhd = "HD0" + to_string(cnt3); dshd[i].mkh = v[dem++]; dshd[i].mmh = v[dem++]; string sl = v[dem++]; dshd[i].soluong = stoi(sl); MatHang x = MH[dshd[i].mmh]; dshd[i].thanhtien = x.ban * dshd[i].soluong; } } 

void xuatHD(){ for(int i = 0; i < k; i++){ cout << dshd[i].mhd << " "; KhachHang x = KH[dshd[i].mkh]; cout << x.name << " " << x.dc << " "; MatHang y = MH[dshd[i].mmh]; cout << y.tmh << " " << y.donvi << " " << y.mua << " " << y.ban << " "; cout << dshd[i].soluong << " " << dshd[i].thanhtien << endl; } } 


int main(){ string res; while(getline(fileKH, res)){ v.push_back(res); } while(getline(fileMH, res)){ v.push_back(res); } while(fileHD >> res){ v.push_back(res); } nhapKH(); nhapMH(); nhapHD(); xuatHD(); return 0; }
