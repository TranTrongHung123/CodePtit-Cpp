#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int dpA[1000005]; // dpA[i] la so cach it nhat de bien S1...Si ve toan ky tu A
int dpB[1000005]; // dpB[i] la so cach it nhat de bien S1...Si ve toan ky tu B

// Co so quy hoach dong xau rong dpA[0] = dpB[0] = 0
// Duyet qua toan bo chuoi S
// + Neu S[i] == 'A' : Thi khong can bien doi vi tri nay nua ne so cach se la dpA[i] = dpA[i-1]
// + Neu S[i] == 'B' : Se co 2 cach bien doi
// - Cach 1 : Bien het S1...Si-1 ve A va cong 1 phep bien doi S[i] ve A
// - Cach 2 : Bien het S1...Si-1 ve B va cong 1 phep bien doi toan bo day tu dau ve A
// => chon cach nho hon trong 2 cach nay

int main(){
	string s;
	cin >> s;
	int len = s.size();
	s = " " + s;
	for(int i = 1; i <= len; i++){
		if(s[i] == 'A'){
			dpA[i] = dpA[i-1];
			dpB[i] = 1 + min(dpA[i-1], dpB[i-1]);
		}
		else{
			dpB[i] = dpB[i-1];
			dpA[i] = 1 + min(dpA[i-1], dpB[i-1]);		
		}
	}
	cout << dpA[len];
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