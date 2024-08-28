#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

class NhanVien{
	private:
		string mnv, ten, gioitinh, ngaysinh, diachi, mst, ngaythue;
	public:
		NhanVien();
		friend istream& operator >> (istream& cin, NhanVien& x);
		friend ostream& operator >> (ostream& cout, NhanVien x);
};

NhanVien::NhanVien(){
	mnv = "00001";
}

istream& operator >> (istream& cin, NhanVien& x){
	getline(cin, x.ten);
	getline(cin, x.gioitinh);
	getline(cin, x.ngaysinh);
	getline(cin, x.diachi);
	getline(cin, x.mst);
	getline(cin, x.ngaythue);
	return cin;
}

ostream& operator >> (ostream& cout, NhanVien x){
	cout << x.mnv << " " << x.ten << " " << x.gioitinh << " " << x.ngaysinh << " " << x.diachi << " " << x.mst << " " << x.ngaythue;
	return cout;
}

int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
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