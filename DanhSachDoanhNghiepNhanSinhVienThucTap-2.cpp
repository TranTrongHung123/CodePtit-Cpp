#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

struct DN{
	string ma, ten;
	int soluong;	
};

bool cmp(DN a, DN b){
	if(a.soluong == b.soluong) return a.ma < b.ma;
	return a.soluong > b.soluong;
}

int main(){
	int n;
	cin >> n;
	DN a[n];
	for(int i = 0; i < n; i++){
		scanf("\n");
		getline(cin, a[i].ma);
		getline(cin, a[i].ten);
		cin >> a[i].soluong;
	}
	sort(a, a + n, cmp);
	int q;
	cin >> q;
	while(q--){
		int l, r;
		cin >> l >> r;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << l << " DEN " << r << " SINH VIEN:" << endl;
		for(int i = 0; i < n; i++){
			if(a[i].soluong >= l && a[i].soluong <= r){
				cout << a[i].ma << " " << a[i].ten << " " << a[i].soluong << endl;
			}
		}
	}
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