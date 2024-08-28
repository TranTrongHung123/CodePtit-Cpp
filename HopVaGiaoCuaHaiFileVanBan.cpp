#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

string chuanhoa(string s){
	for(auto &x : s) x = tolower(x);
	return s;
}

int main(){
	ifstream in1, in2;
	in1.open("DATA1.in");
	in2.open("DATA2.in");
	map<string,int> hop, giao;
	string s1, s2;
	while(in1 >> s1){
		hop[chuanhoa(s1)] = 1;
		giao[chuanhoa(s1)] = 1;
	}
	while(in2 >> s2){
		hop[chuanhoa(s2)] = 1;
		if(giao[chuanhoa(s2)] == 1){
			giao[chuanhoa(s2)] = 2;
		}
	}
	vector<pair<string,int>> H, G;
	for(auto x : hop) H.push_back(x);
	for(auto x : giao) G.push_back(x);
	for(int i = 0; i < H.size(); i++){
		cout << H[i].first;
		if(i != (H.size() - 1)) cout << " ";
		else cout << endl;
	}
	for(int i = 0; i < G.size(); i++){
		if(G[i].second == 2){
			cout << G[i].first;
			if(i != (G.size() - 1)) cout << " ";
			else cout << endl;
		}
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