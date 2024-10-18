#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

string Nhan_Xau(string s1, string s2){
	int len = s1.size() + s2.size();
	vector<int> res(len, 0);
	reverse(begin(s1), end(s1));
	reverse(begin(s2), end(s2));
	for(int i = 0; i < s1.size(); i++){
		int carry = 0;
		for(int j = 0; j < s2.size(); j++){
			int x = (s1[i] - '0') * (s2[j] - '0') + carry + res[i + j];
			res[i + j] = x % 10;
			carry = x / 10;
		}
		if(carry){
			res[i + s2.size()] += carry;
		}
	}
	string s = "";
	for(auto x : res){
		s = to_string(x) + s;
	}
	while(s.size() > 1 && s[0] == '0'){
		s.erase(0, 1);
	}
	return s;
}

int main(){
	int TC;
	cin >> TC;
	while(TC--){
		string s1, s2;
		cin >> s1 >> s2;
		cout << Nhan_Xau(s1, s2) << endl;
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