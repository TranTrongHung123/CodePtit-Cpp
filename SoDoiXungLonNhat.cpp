#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

bool cmp1(pair<int,int> a, pair<int,int> b){
	if(a.second == b.second) return a.first > b.first;
	return a.second > b.second;
}

bool cmp2(pair<int,int> a, pair<int,int> b){
	return a.first > b.first;
}

//bool check(string s){
//	for(auto x : s){
//		if(x != '0'){
//			return false;
//		}
//	}
//	return true;
//}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int TC;
	cin >> TC;
	while(TC--){
		string s;
		cin >> s;
//		if(check(s)){
//			cout << endl;
//			continue;
//		}
		int mark[10] = {0};
		for(auto x : s){
			++mark[x - '0'];
		}
		vector<pair<int,int>> chan; // Luu cac so co so lan xuat hien chan
		vector<pair<int,int>> le;   // Luu cac so co so lan xuat hien le
		for(int i = 0; i <= 9; i++){
			if(mark[i] != 0){
				if(mark[i] % 2 == 0){
					chan.push_back({i, mark[i]});
				}
				else{
					le.push_back({i, mark[i]});
				}
			}
		}
		if((chan.size() == 1) && (chan[0].first == 0)){ 
			chan.pop_back();
		}
		pair<int,int> tmp;
		bool flag = false;
		if(le.size() != 0){
			flag = true;
			sort(le.begin(), le.end(), cmp1);
			if((le[0].first == 0) && (chan.size() == 0)){
				tmp = {le[1].first, le[1].second};
			}
			else{
				tmp = {le[0].first, le[0].second};
			}
		}
		sort(chan.begin(), chan.end(), cmp2);
		string res = "";
		for(auto x : chan){
			res += string((x.second / 2), (x.first + '0'));
		}
		string ans = res;
		reverse(ans.begin(), ans.end());
		if(flag == true){
			res = res + string(tmp.second, tmp.first + '0') + ans;
		}
		else{
			res = res + ans;
		}
		cout << res << endl;
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