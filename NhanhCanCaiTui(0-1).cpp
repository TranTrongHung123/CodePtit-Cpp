#include <bits/stdc++.h>
using namespace std;

struct Data{
	int Weight, Value;
	int stt;
};

int n, b, Fopt = INT_MIN, Value_Current = 0;
int X[1000];
Data a[1000];
vector<pair<int,string>> res;

bool cmp(Data x, Data y){
	return (float)x.Value/x.Weight > (float)y.Value/y.Weight;
}

void Try(int i){
	for(int j = 1; j >= 0; j--){
		if((b - j * (a[i].Weight)) >= 0){
			X[i] = j;
			Value_Current += (a[i].Value * X[i]);
			b -= (a[i].Weight * X[i]);
			if(i == n){
				Fopt = max(Fopt, Value_Current);
				string tmp = "(";
				for(int l = 1; l <= n; l++){
					tmp += to_string(X[l]);
					if(l != n){
						tmp += ", ";
					}
					else{
						tmp += ")";
					}
				}
				res.push_back({Value_Current, tmp});
			}
			else if(Value_Current + (b * a[i+1].Value / a[i+1].Weight) > Fopt){
				Try(i + 1);
			}
			Value_Current -= (a[i].Value * X[i]);
			b += (a[i].Weight * X[i]);			
		}
	}
}

int main(){
	cout << "Nhap vao so luong do vat: ";
	cin >> n;
	cout << "Nhap vao khoi luong toi da cua cai tui: ";
	cin >> b;
	for(int i = 1; i <= n; i++){
		cout << "Nhap gia tri va khoi luong cua do vat thu " << i << ": ";
		cin >> a[i].Value >> a[i].Weight;
		a[i].stt = i;
	}
	sort(a + 1, a + n + 1, cmp);
	Try(1);
	cout << "Gia tri toi uu la: " << Fopt << endl;
	cout << "Cau hinh toi uu la: (";
	for(int i = 1; i <= n; i++){
		cout << "x" << a[i].stt;
		if(i != n) cout << ", ";
		else cout << ") = ";
	}
	for(auto x : res){
		if(x.first == Fopt){
			cout << x.second << endl;
			break;
		}
	}
}