#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

struct SinhVien{
	int msv;
	string ten, lop, ngaysinh;
	double gpa;
};

void nhap(SinhVien ds[], int n){
	for(int i = 0; i < n; i++){
		ds[i].msv = i+1;
		cin.ignore();
		getline(cin, ds[i].ten);
		cin >> ds[i].lop >> ds[i].ngaysinh >> ds[i].gpa;
	}	
}

string chuanhoa1(string s){
	if(s[1] == '/'){
		s = "0" + s;
	}
	if(s[4] == '/'){
		s.insert(3, "0");
	}
	return s;
}

string chuanhoa2(string s){
	for(auto &x : s){
		x = tolower(x);
	}
	stringstream ss(s);
	string token;
	vector<string> vt;
	while(ss >> token){
		vt.push_back(token);
	}
	string tmp = "";
	for(int i = 0; i < vt.size(); i++){
		vt[i][0] = toupper(vt[i][0]);
		tmp += vt[i];
		if(i != vt.size() - 1){
			tmp += " ";
		}
	}
	return tmp;
}

void in(SinhVien ds[], int n){
	for(int i = 0; i < n; i++){
		string t = "B20DCCN" + string(3 - to_string(ds[i].msv).size(), '0') + to_string(ds[i].msv);
		cout << t << " " << chuanhoa2(ds[i].ten) << " " << ds[i].lop << " " << chuanhoa1(ds[i].ngaysinh) << " " << fixed << setprecision(2) << ds[i].gpa << endl;
	}
}


int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}