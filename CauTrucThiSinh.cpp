#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

struct ThiSinh{
	string name, date;
	double x, y, z;
};

void nhap(ThiSinh &A){
	getline(cin, A.name);
	cin >> A.date >> A.x >> A.y >> A.z;
}

void in(ThiSinh A){
	cout << A.name << " " << A.date << " " << fixed << setprecision(1) << (A.x + A.y + A.z);
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}