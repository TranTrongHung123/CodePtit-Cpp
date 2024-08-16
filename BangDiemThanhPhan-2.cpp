#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

struct sinhvien{
	string msv, ten, lop;
	double x1, x2, x3;
};

bool cmp(sinhvien a, sinhvien b){
	return a.ten < b.ten;
}

int main(){
	int n;
	cin >> n;
	sinhvien a[n];
	for(int i = 0; i < n; i++){
		cin.ignore();
		getline(cin, a[i].msv);
		getline(cin, a[i].ten);
		getline(cin, a[i].lop);
		cin >> a[i].x1 >> a[i].x2 >> a[i].x3;
	}
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		cout << i + 1 << " " << a[i].msv << " " << a[i].ten << " " << a[i].lop << " " << fixed << setprecision(1) << a[i].x1 << " " << fixed << setprecision(1) << a[i].x2 << " " << fixed << setprecision(1) << a[i].x3 << endl;
	}	
}