#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

struct mathang{
	int mmh;
	string ten, nhom;
	double mua, ban;
};

bool cmp(mathang a, mathang b){
	return (a.ban - a.mua) > (b.ban - b.mua);
}

int main(){
	int n;
	cin >> n;
	mathang a[n];
	for(int i = 0; i < n; i++){
		a[i].mmh = i + 1;
		cin.ignore();
		getline(cin, a[i].ten);
		getline(cin, a[i].nhom);
		cin >> a[i].mua >> a[i].ban;
	}
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		cout << a[i].mmh << " " << a[i].ten << " " << a[i].nhom << " " << fixed << setprecision(2) << (a[i].ban - a[i].mua) << endl;
	}
}