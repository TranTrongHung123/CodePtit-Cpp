#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int stt = 0;

class NhanVien{
	private:
		string mnv, ten, gioitinh, ngaysinh, diachi, mst, ngayki;
	public:
		string getNgaySinh(){
			return this->ngaysinh;
		}
		friend istream& operator >> (istream& cin, NhanVien& x){
			scanf("\n");
			string t = to_string(++stt);
			x.mnv = string(5 - t.size(), '0') + t;
			getline(cin, x.ten);
			getline(cin, x.gioitinh);
			getline(cin, x.ngaysinh);
			getline(cin, x.diachi);
			getline(cin, x.mst);
			cin >> x.ngayki;
			return cin;
		}
		friend ostream& operator << (ostream& cout, NhanVien x){
			cout << x.mnv << " " << x.ten << " " << x.gioitinh << " " << x.ngaysinh << " " << x.diachi << " " << x.mst << " " << x.ngayki << endl;
			return cout;
		}
};

bool cmp(NhanVien a, NhanVien b){
	if(stoi(a.getNgaySinh().substr(6)) != stoi(b.getNgaySinh().substr(6))){
		return stoi(a.getNgaySinh().substr(6)) < stoi(b.getNgaySinh().substr(6));
	}
	if(stoi(a.getNgaySinh().substr(0,2)) != stoi(b.getNgaySinh().substr(0,2))){
		return stoi(a.getNgaySinh().substr(0,2)) < stoi(b.getNgaySinh().substr(0,2));
	}
	return stoi(a.getNgaySinh().substr(3,2)) < stoi(b.getNgaySinh().substr(3,2));
}

void sapxep(NhanVien ds[], int n){
	sort(ds, ds + n, cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
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