#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

string ChuanHoa(string s){
	if(s[1] == '/'){
		s = "0" + s;
	}
	if(s[4] == '/'){
		s.insert(3, "0");
	}
	return s;
}

bool cmp(string x, string y){
	if(x.substr(6) != y.substr(6)) return x.substr(6) < y.substr(6);
	if(x.substr(3, 2) != y.substr(3, 2)) return x.substr(3, 2) < y.substr(3, 2);
	return x.substr(0, 2) < y.substr(0, 2);
}

int main(){
	int n;
	cin >> n;
	string a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		a[i] = ChuanHoa(a[i]);
	}
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		cout << a[i] << endl;
	}	
}