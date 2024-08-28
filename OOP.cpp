#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

class SinhVien{
	private : 
		string ten, ngaysinh, lop;
		double gpa;
		static string tentruong; // Bien chung cho class
	public :
		SinhVien(){ // Ham tao mac dinh khong tham so
			cout << "Ham Tao" << endl;
		}
		
		SinhVien(string ten){ // Ham tao co tham so
			this->ten = ten;
		}
		
		void input();
		
		void output();
		
		string getTen(); // getter dung de lay ve ten
		
		void setTen(string ten); // setter dung de thay doi ten
		
		~SinhVien(){ // Ham huy
			cout << "Ket thuc class" << endl;
		}
		
		// Nap chong toan tu
		friend istream& operator >> (istream& in, SinhVien& x){ // Nap chong toan tu >>
			in >> x.ten >> x.ngaysinh >> x.lop;
			return in;
		}
		
		friend ostream& operator << (ostream& out, SinhVien x){ // nap chong toan tu <<
			out << x.ten << " " << x.lop << " " << x.ngaysinh << endl;
			return out;
		}
		
		friend SinhVien operator + (SinhVien a, SinhVien b){
			SinhVien s;
			s.gpa = a.gpa + b.gpa;
			return s;
		}
};

string SinhVien :: tentruong = "PTIT"; // Khoi tao ten truong cho tat ca sinh vien

void SinhVien :: input(){ // Ham nhap thong tin
	cin >> ten >> ngaysinh >> lop;
}

void SinhVien :: output(){ // Ham xuat thong tin
	cout << ten << " " << ngaysinh << " " << lop << endl;
}

string SinhVien :: getTen(){
	return ten;
}

void SinhVien :: setTen(string ten){
	this->ten = ten;
}

int main(){
	SinhVien x; // Khai bao ham tao kieu khong tham so
	SinhVien y("Hung"); // Khai bao kieu ham tao co tham so
	cout << y.getTen() << endl;
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