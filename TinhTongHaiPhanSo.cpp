#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

struct PhanSo{
	ll tu, mau;
};

void nhap(PhanSo &a){
	cin >> a.tu >> a.mau;
}

PhanSo tong(PhanSo p, PhanSo q){
	PhanSo t;
	t.mau = p.mau * q.mau;
	t.tu = q.tu * p.mau + p.tu * q.mau;
	ll x = __gcd(t.tu, t.mau);
	t.tu /= x;
	t.mau /= x;
	return t;
}

void in(PhanSo t){
	cout << t.tu << "/" << t.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}