#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

class SinhVien{
	private:
		string msv, ten, lop, email;
	public:
		string getMsv();
		friend istream& operator >> (istream& in, SinhVien& x);
		friend ostream& operator << (ostream& out, SinhVien x);
};

string SinhVien::getMsv(){
	return this->msv;
}

istream& operator >> (istream& in, SinhVien& x){
	getline(in, x.msv);
	getline(in, x.ten);
	getline(in, x.lop);
	getline(in, x.email);
	return in;
}

ostream& operator << (ostream& out, SinhVien x){
	out << x.msv << " " << x.ten << " " << x.lop << " " << x.email << endl;
	return out;
}

bool cmp(SinhVien a, SinhVien b){
	return a.getMsv() < b.getMsv();
}

int main(){
	vector<SinhVien> vt;
	SinhVien x;
	while(cin >> x){
		vt.push_back(x);
	}
	sort(begin(vt), end(vt), cmp);
	for(auto x : vt){
		cout << x;
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