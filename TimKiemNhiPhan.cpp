#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int find(int a[], int n, int x){
	int l = 0, r = n-1;
	while(l <= r){
		int mid = (l + r) / 2;
		if(a[mid] == x){
			return 1;
		}
		else if(a[mid] > x){
			r = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}
	return 0;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		if(find(a,n,x)){
			cout << "1";
		}			
		else{
			cout << "-1";
		}
		cout << endl;
	}
}