#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n-1; i++){
		for(int j = 1; j <= n-i; j++){
			cout << " ";
		}
		for(int j = 1; j <= 2*i-1; j++){
			if(i == 1 || j == 1 || j == 2*i-1){
				cout << "*";
			}
			else{
				cout << " ";
			}
		}
		cout << endl;
	}
	for(int i = 1; i <= 2*n-1; i++){
		if(i == 1 || i == 2*n-1){
			cout << "*";
		}
		else{
			cout << " ";
		}
	}
	cout << endl;
	for(int i = n-1; i >= 1; i--){
		for(int j = 1; j <= n-i; j++){
			cout << " ";
		}
		for(int j = 1; j <= 2*i-1; j++){
			if(i == 1 || j == 1 || j == 2*i-1){
				cout << "*";
			}
			else{
				cout << " ";
			}
		}
		cout << endl;
	}	
}