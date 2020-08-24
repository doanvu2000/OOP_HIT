#include <iostream>
using namespace std;
class DATE{
	private:
		int day;
//	public:
//		void nhap();
//		void xuat();
	public:
		friend class NHANSU;
		friend void show(DATE x);
};
void show(DATE x){
	cout<<"ngay = "<<x.day;
}
//
class NHANSU{
	private:
		int tuoi;
		DATE NS;
	public:
		void nhap();
		void xuat();
};
void NHANSU::nhap(){
	cin>>tuoi;
	cin>>NS.day;
}
int main(){

	return 0;
}

