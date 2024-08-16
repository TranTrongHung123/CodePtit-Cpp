#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

struct Point{
    double x, y;
};

void input(struct Point &A){
	cin >> A.x >> A.y;
}

double distance(struct Point A, struct Point B){
	double t1 = pow(A.x - B.x, 2);
	double t2 = pow(A.y - B.y, 2);
	double t = sqrt(t1 + t2);
	return t;
}

int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}