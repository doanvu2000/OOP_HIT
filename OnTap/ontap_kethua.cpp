#include <iostream>
using namespace std;
class Cha{
	protected:
		int tien;
	public:
		void nhap();
		void xuat();
};
void Cha::nhap(){
	
}
//nhap xuat cua Cha
class Con1 : public Cha{
	private:
		int diemvan;
	public:
		void nhap();
		void xuat();
};
void Con1::nhap(){
	Cha::nhap();//nhap thuoc tinh chung
	cin>>diemvan;
}
class Con2 : public Cha{
	private:
		int diemtoan;
	public:
		void nhap();
		void xuat();
};
void Con2::nhap(){
	Cha::nhap();//nhap thuoc tinh chung
	cin>>diemtoan;
}
int main(){

	return 0;
}

