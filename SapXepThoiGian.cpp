#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

struct thoigian{
	int gio, phut, giay, s;
};

bool cmp(thoigian a, thoigian b){
	return a.s < b.s;
}

int main(){
	int n;
	cin >> n;
	thoigian a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i].gio >> a[i].phut >> a[i].giay;
		a[i].s = 3600 * a[i].gio + 60 * a[i].phut + a[i].giay;
	}
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		cout << a[i].gio << " " << a[i].phut << " " << a[i].giay << endl;
	}	
}