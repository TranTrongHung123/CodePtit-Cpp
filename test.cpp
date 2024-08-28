#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int sttKhach = 1;

class KhachHang{
	private:
		string MaKhachHang, TenKhach, GioiTinh, NgaySinh, DiaChi;
	public:
		friend istream& operator >> (istream& cin, KhachHang& x){
			if(sttKhach == 1) scanf("\n");
			string t = to_string(sttKhach++);
			x.MaKhachHang = "KH" + string(3 - t.size(), '0') + t;
			getline(cin, x.TenKhach);
			getline(cin, x.GioiTinh);
			getline(cin, x.NgaySinh);
			getline(cin, x.DiaChi);
			return cin;
		}
		friend class HoaDon;
};

int sttHang = 1;

class MatHang{
	private:
		string MaMatHang, TenHang, DonVi;
		int GiaMua, GiaBan;
	public:
		friend istream& operator >> (istream& cin, MatHang& x){
			scanf("\n");
			string t = to_string(sttHang++);
			x.MaMatHang = "MH" + string(3 - t.size(), '0') + t;
			getline(cin, x.TenHang);
			getline(cin, x.DonVi);
			cin >> x.GiaMua >> x.GiaBan;
			return cin;
		}
		friend class HoaDon;
};

class HoaDon{
	private:
		string MaHoaDon;
		int SoLuong;
	public:
		friend istream& operator >> (istream& cin, HoaDon& x){
			cin >> x.MaKhachHang;
			return cin;
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
