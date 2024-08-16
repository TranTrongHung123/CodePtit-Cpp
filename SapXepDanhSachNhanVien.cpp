#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

struct NhanVien{
	string mnv, ten, gioitinh, ngaysinh, diachi, mst, ngayki;
};

int x = 0;

void nhap(NhanVien &a){
	++x;
	if(x == 1){
		cin.ignore();
	}
	a.mnv = string(5 - to_string(x).size(), '0') + to_string(x);
	getline(cin, a.ten);
	getline(cin, a.gioitinh);
	getline(cin, a.ngaysinh);
	getline(cin, a.diachi);
	getline(cin, a.mst);
	getline(cin, a.ngayki);	
}

bool cmp(NhanVien a, NhanVien b){
	if(stoi(a.ngaysinh.substr(6,4)) != stoi(b.ngaysinh.substr(6,4))){
		return stoi(a.ngaysinh.substr(6,4)) < stoi(b.ngaysinh.substr(6,4));
	}
	if(stoi(a.ngaysinh.substr(0,2)) != stoi(b.ngaysinh.substr(0,2))){
		return stoi(a.ngaysinh.substr(3,2)) != stoi(b.ngaysinh.substr(3,2));
	}
	return stoi(a.ngaysinh.substr(3,2)) < stoi(b.ngaysinh.substr(3,2));
}

void sapxep(NhanVien ds[], int n){
	sort(ds, ds + n, cmp);
}

void inds(NhanVien a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i].mnv << " " << a[i].ten << " " << a[i].gioitinh << " " << a[i].ngaysinh << " " << a[i].diachi << " " << a[i].mst << " " << a[i].ngayki << endl;
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}