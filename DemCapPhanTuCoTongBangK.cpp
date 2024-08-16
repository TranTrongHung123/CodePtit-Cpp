#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int find1(int l, int r, int a[], int x){
	int res = -1;
	while(l <= r){
		int mid = (l + r) / 2;
		if(a[mid] == x){
			res = mid;
			r = mid - 1;
		}
		else if(a[mid] > x){
			r = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}
	return res;
}

int find2(int l, int r, int a[], int x){
	int res = -1;
	while(l <= r){
		int mid = (l + r) / 2;
		if(a[mid] == x){
			res = mid;
			l = mid + 1;
		}
		else if(a[mid] > x){
			r = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		int cnt = 0;
		for(int i = 0; i < n-1; i++){
			int x1 = find1(i + 1, n - 1, a, k - a[i]);
			int x2 = find2(i + 1, n - 1, a, k - a[i]);
			if(x1 != -1 && x2 != -1){
				cnt += x2 - x1 + 1;
			}
		}		
		cout << cnt << endl;
	}
}