#include <iostream>
using namespace std;
class SinhVien{
	public:
		// các thuộc tính
		string maSV, hoTen;
		int tuoi;
		float diem;
		//phương thức xuat()
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
	//gán thông tin SinhVien a
	a.maSV = "123";
	a.hoTen = "sinh vien A";
	a.tuoi = 19;
	a.diem = 9.5;
	//gán thông tin SinhVien b
	b.maSV = "567";
	b.hoTen = "sinh vien B";
	b.tuoi = 19;
	b.diem = 8.5;
	// hiển thị thông tin 2 2 đối tượng
	a.xuat();
	b.xuat();
	return 0;
}

