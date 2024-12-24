//Có một cuốn sổ tay ghi ghép tên liên lạc và số điện thoại của bạn bè, người thân.
//Do quá trình ghi chép, thứ tự được ghi lại dựa vào ngày ghi chép nên chưa được sắp xếp theo họ tên.
//Để thuận lợi trong quá trình lưu trữ và sử dụng, người ta đã chuyển toàn bộ thông tin từ sổ tay lên lưu trữ trên điện thoại.
//Dữ liệu trên điện thoại khi hiển thị đã được sắp xếp theo tên liên lạc. Lưu ý, nếu tên trùng nhau thì sắp xếp theo họ đệm.
//Cho thông tin danh sách liên lạc được ghi chép như mẫu từ tập tin SOTAY.txt, hãy đưa ra dữ liệu hiển thị trên điện thoại vào tập tin DIENTHOAI.txt
//Input: Lịch sử ghi chép theo ngày, mỗi ngày có thể ghi chép nhiều thông tin liên lạc. Họ tên tối đa 100 ký tự, số điện thoại có 10 chữ số.
//Ví dụ:
//SOTAY.txt
//Ngay 15/11/2021
//Nguyen Van A
//0914141581
//Nguyen Van B
//0921241515
//Ngay 16/11/2021
//Tran Van C
//0935141141
//DIENTHOAI.txt
//Nguyen Van A: 0914141581 15/11/2021
//Nguyen Van B: 0921241515 15/11/2021
//Tran Van C: 0935141141 16/11/2021

 
#include <bits/stdc++.h>
using namespace std;

struct Data{
	string ten, sdt, ngay;
};

bool check(string s){
	for(auto x : s){
		if(!isdigit(x)){
			return false;
		}
	}
	return true;
}

string getTen(string ten, string &dem){
	stringstream ss(ten);
	string token;
	vector<string> vt;
	while(ss >> token){
		vt.push_back(token);
	}
	for(int i = 0; i < vt.size() - 2; i++){
		dem += vt[i];
		dem += " ";
	}
	return vt[vt.size() - 1];
}

bool cmp(Data x, Data y){
	string tenx, teny, demx, demy;
	tenx = getTen(x.ten, demx);
	teny = getTen(y.ten, demy);
	if(tenx != teny){
		return tenx < teny;
	}
	return demx < demy;
}

int main(){
	Data a[10000];
	ifstream in;
	ofstream out;
	in.open("SOTAY.txt");
	out.open("DIENTHOAI.txt");
	string s;
	int n = 0;
	string tmp;
	bool mark1 = true, mark2 = true;
	while(getline(in, s)){
		if(s.find('/') != string::npos){
			tmp = s;
		}
		else if(check(s) == true){
			mark1 = false;
			a[n].sdt = s;
		}
		else{
			mark2 = false;
			a[n].ten = s;
		}
		if(mark1 == false && mark2 == false){
			a[n].ngay = tmp.substr(5);
			++n;
			mark1 = true;
			mark1 = true;
		}
	}
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		out << a[i].ten << ": " << a[i].sdt << " " << a[i].ngay << endl;
	}
}