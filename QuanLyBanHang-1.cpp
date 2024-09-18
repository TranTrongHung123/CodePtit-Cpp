#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

class KhachHang;
class MatHang;
class HoaDon;

vector<KhachHang> KH;
vector<MatHang> MH;

int idkh = 1, idmh = 1, idhd = 1;

class KhachHang{
	private:
		string MaKhachHang, TenKhach, GioiTinh, NgaySinh, DiaChi;
	public:
		friend istream& operator >> (istream& cin, KhachHang& x){
			if(idkh == 1) scanf("\n");	
			string id = to_string(idkh++);
			x.MaKhachHang = "KH" + string(3 - id.size(), '0') + id;
			getline(cin, x.TenKhach);
			getline(cin, x.GioiTinh);
			getline(cin, x.NgaySinh);
			getline(cin, x.DiaChi);
			KH.push_back(x);
			return cin;
		}
		string getMaKhachHang(){
			return this->MaKhachHang;
		}
		string getTenKhach(){
			return this->TenKhach;
		}
		string getDiaChi(){
			return this->DiaChi;
		}
};

class MatHang{
	private:
		string MaMatHang, TenHang, DonVi;
		int GiaMua, GiaBan;
	public:
		friend istream& operator >> (istream& cin, MatHang& x){
			scanf("\n");
			string id = to_string(idmh++);
			x.MaMatHang = "MH" + string(3 - id.size(), '0') + id;
			getline(cin, x.TenHang);
			getline(cin, x.DonVi);
			cin >> x.GiaMua >> x.GiaBan;
			MH.push_back(x);
			return cin;
		}
		string getMaMatHang(){
			return this->MaMatHang;
		}
		string getTenHang(){
			return this->TenHang;
		}
		string getDonVi(){
			return this->DonVi;
		}
		int getGiaMua(){
			return this->GiaMua;
		}
		int getGiaBan(){
			return this->GiaBan;
		}
};

class HoaDon{
	private:
		string MaHoaDon, ma_khach, ma_hang;
		int soluong;
	public:
		friend istream& operator >> (istream& cin, HoaDon& x){
			string id = to_string(idhd++);
			x.MaHoaDon = "HD" + string(3 - id.size(), '0') + id;
			cin >> x.ma_khach >> x.ma_hang >> x.soluong;
			return cin;
		}
		friend ostream& operator << (ostream& cout, HoaDon x){
			cout << x.MaHoaDon << " ";
			for(int i = 0; i < KH.size(); i++){
				if(x.ma_khach == KH[i].getMaKhachHang()){
					cout << KH[i].getTenKhach() << " " << KH[i].getDiaChi() << " ";
					break;
				}
			}
			for(int i = 0; i < MH.size(); i++){
				if(x.ma_hang == MH[i].getMaMatHang()){
					cout << MH[i].getTenHang() << " " << MH[i].getDonVi() << " " << MH[i].getGiaMua() << " " << MH[i].getGiaBan() << " " << x.soluong << " " << x.soluong * MH[i].getGiaBan() << endl;
				}
			}
			return cout;
		}
};

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
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