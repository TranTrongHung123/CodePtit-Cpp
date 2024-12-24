//Tạo class Diem có 2 thuộc tính toạ độ x, y và 2 phương thức nhap(), hienThi() để hiển thị toạ độ theo định dạng: (x,y)
//
// Tạo class HinhTron kế thừa từ Diem, có thêm thuộc tính bán kính r và 2 phương thức nhap(), hienThi() để hiển thị hình tròn theo định dạng: (x,y) r
//
// Tạo class HinhTru kế thừa từ HinhTron, có thêm thuộc tính chiều cao h và 2 phương thức nhap(), hienThi() để hiện thị hình trụ theo định dạng: (x,y) r h
//
// Sử dụng hàm main như sau:
//
// int main(){
//
//     HinhTru a;
//
//     a.nhap();
//
//     a.Diem::hienThi(); cout<<endl;
//
//     a.HinhTron::hienThi(); cout<<endl;
//
//     a.HinhTru::hienThi();cout<<endl;
//
//    return 0;
//
// }
//
// Ví dụ:
//
// input:
//
// 1 2 3 4
//
// Output:
//
// (1,2)
//
// (1,2) 3
//
// (1,2) 3 4

#include <bits/stdc++.h>
#define ll long long
#define endl "\n";
using namespace std;

class Diem{
	private:
		int x, y;
		
	public:
		void nhap(){
			cin >> x >> y;
		}
		void hienThi(){
			cout << "(" << x << "," << y << ")";
		}
};

class HinhTron : public Diem{
	private:
		int bankinh;
	public:
		void nhap(){
			Diem::nhap();
			cin >> bankinh;
		}
		void hienThi(){
			Diem::hienThi();
			cout << " " << bankinh;
		}
};

class HinhTru : public HinhTron{
	private:
		int h;
	public:
		void nhap(){
			HinhTron::nhap();
			cin >> h;
		}
		void hienThi(){
			HinhTron::hienThi();
			cout << ' ' << h;
		}
};

int main(){
     HinhTru a;
     a.nhap();
     a.Diem::hienThi(); cout<<endl;
     a.HinhTron::hienThi(); cout<<endl;
     a.HinhTru::hienThi();cout<<endl;
  return 0;
 }