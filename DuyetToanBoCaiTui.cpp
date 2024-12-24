#include <bits/stdc++.h>
using namespace std;

int x, max_Weight, max_Value;
int arr_Weight[1000], arr_Value[1000], X[1000];
vector<pair<int,string>> res;

void Try(int i){
    for(int j = 0; j <= 1; j++){
        X[i] = j;
        if(i == x){
            int tmpw = 0, tmpv = 0;
            for(int l = 1; l <= x; l++){
                tmpw += X[l] * arr_Weight[l];
                tmpv += X[l] * arr_Value[l];
            }
            if(tmpw <= max_Weight){
                if(tmpv >= max_Value){
                    max_Value = tmpv;
                    string tmp = "";
                    for(int l = 1; l <= x; l++){
                        tmp += to_string(X[l]);
                        if(l != x) tmp += " ";
                    }
                    res.push_back({tmpv, tmp});
                }
            }
        }
        else{
            Try(i + 1);
        }
    }
}

int main(){
    max_Value = INT_MIN;
    cout << "Nhap so phan tu cua tap x: ";
    cin >> x;
    cout << "Nhap vao khoi luong toi da cai tui co the chua duoc: ";
    cin >> max_Weight;
    cout << "Nhap vao gia tri cua cac do vat: ";
    for(int i = 1; i <= x; i++) cin >> arr_Value[i];
    cout << "Nhap vao khoi luong cua cac do vat: ";
    for(int i = 1; i <= x; i++) cin >> arr_Weight[i];
    Try(1);
    cout << "Gia tri lon nhat cai tui co the chua duoc la: " << max_Value << endl;
    cout << "Cac cau hinh thoa man: ";
    for(auto x : res){
        if(x.first == max_Value){
            cout << "(" << x.second << ")" << endl;
            break;
        }
    }
}