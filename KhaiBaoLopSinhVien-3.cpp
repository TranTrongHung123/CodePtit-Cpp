#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

string chuanhoa_ten(string s){
	for(auto &x : s) x = tolower(x);
	stringstream ss(s);
	string token;
	vector<string> vt;
	while(ss >> token){
		vt.push_back(token);
	}
	for(int i = 0; i < vt.size(); i++){
		vt[i][0] = toupper(vt[i][0]);
	}
	string tmp = "";
	for(int i = 0; i < vt.size(); i++){
		tmp += vt[i];
		if(i != vt.size() - 1) tmp += " ";
	}	
	return tmp;
}

string chuanhoa_ngay(string s){
	if(s[1] == '/'){
		s = "0" + s;
	}
	if(s[4] == '/'){
		s.insert(3, "0");
	}
	return s;
}

class SinhVien{
	private:
		string msv = "B20DCCN001";
		string ten, lop, ngaysinh;
		float gpa;
	public:
		SinhVien();
		friend istream& operator >> (istream& in, SinhVien& x);
		friend ostream& operator << (ostream& out, SinhVien x);
};

SinhVien::SinhVien(){
	gpa = 0;
	ten = lop = ngaysinh = "";
}

istream& operator >> (istream& in, SinhVien& x){
	getline(in, x.ten);
	cin >> x.lop >> x.ngaysinh >> x.gpa;
	return in;
}

ostream& operator << (ostream& out, SinhVien x){
	out << x.msv << " " << chuanhoa_ten(x.ten) << " " << x.lop << " " << chuanhoa_ngay(x.ngaysinh) << " " << fixed << setprecision(2) << x.gpa;
	return out;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
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