#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

string Chuan_Hoa(string s){ // Xoa cac so 0 thua o dau cua xau
	int idx = 0;
	while(idx < s.size() - 1 && s[idx] == '0'){
		++idx;
	}
	return s.substr(idx);
}

string Tru_Xau(string s1, string s2){ // Ham tru hai xau
	int len = max(s1.size(), s2.size());
	while(s1.size() < len) s1 = "0" + s1;
	while(s2.size() < len) s2 = "0" + s2;
	if(s2 > s1) swap(s1, s2);
	int carry = 0;
	string res = "";
	for(int i = len-1; i >= 0; i--){
		int x = (s1[i] - '0') - (s2[i] - '0') - carry;
		if(x < 0){
			carry = 1;
			x += 10;
		}
		else{
			carry = 0;
		}
		res = to_string(x) + res;
	}
	return Chuan_Hoa(res);
}

string Chia_Xau(string X, string Y){
	if((X.size() < Y.size()) || ((X.size() == Y.size()) && (X < Y))){ // Neu so bi chia X nho hon so chia Y thi ket qua phep chia la 0
		return "0";
	}
	string res = "";
	string SBC = X.substr(0, Y.size() - 1); // Tach so bi chia ra
	for(int i = Y.size() - 1; i < X.size(); i++){
		int cnt = 0;
		SBC = SBC + X[i];
		SBC = Chuan_Hoa(SBC);
		while((SBC.size() > Y.size()) || ((SBC.size() == Y.size()) && (SBC >= Y))){ // Neu so bi chia tach duoc lon hon so chia Y thi tru lien tiep
			++cnt;
			SBC = Tru_Xau(SBC, Y);
		}
		res = res + to_string(cnt);			
	}
	return Chuan_Hoa(res);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int TC;
	cin >> TC;
	while(TC--){
		string X, Y;
		cin >> X >> Y;
		cout << Chia_Xau(X, Y) << endl;
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