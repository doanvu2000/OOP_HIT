#include <iostream>
using namespace std;
class SinhVien{
	public:
		// cac thuoc tinh
		string maSV, hoTen;
		int tuoi;
		float diem;
		//phuong thuc xuat()
		void xuat(){
			cout<<"Thong tin sv: "<<endl;
			cout<<"MaSV: "<<maSV<<endl;
			cout<<"Ho ten: "<<hoTen<<endl;
			cout<<"Tuoi: "<<tuoi<<endl;
			cout<<"Diem: "<<diem<<endl;
		}
};
int main(){
	SinhVien a,b;
	//gan thong tin SinhVien a
	a.maSV = "123";
	a.hoTen = "sinh vien A";
	a.tuoi = 19;
	a.diem = 9.5;
	//gan thong tin SinhVien b
	b.maSV = "567";
	b.hoTen = "sinh vien B";
	b.tuoi = 19;
	b.diem = 8.5;
	//hien thi thong tin 2 sinh vien
	a.xuat();
	b.xuat();
	return 0;
}

