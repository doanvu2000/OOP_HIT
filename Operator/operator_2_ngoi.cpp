#include <iostream>
using namespace std;
class PHANSO{
	private:
		double tu;
		double mau;
	public:
		PHANSO(){		
		}
		PHANSO(double tu, double mau){
			this->tu = tu;
			this->mau = mau;
		}
		void toiGian();
	///		kieu_tra_ve operator 'symbol' (); 
		PHANSO operator+(PHANSO x);
		PHANSO operator-(PHANSO x);
		PHANSO operator*(PHANSO x);
		PHANSO operator/(PHANSO x);
		
		//>>: nhap, <<: xuat
		
};
int UCLN(int x, int y){
	if (x % y == 0 )
		return y;
	return UCLN(y,x%y);
}
void PHANSO::toiGian(){
	int uclnn = UCLN(tu, mau);
	tu/= uclnn;
	mau/=uclnn;
		
}
PHANSO PHANSO::operator+(PHANSO x){
	PHANSO tong;
	tong.tu = this->tu * x.mau + this->mau * x.tu;
	tong.mau = this->mau * x.mau;
	return tong;
}
PHANSO PHANSO::operator-(PHANSO x){
	PHANSO hieu;
	hieu.tu = this->tu * x.mau - this->mau * x.tu;
	hieu.mau = this->mau * x.mau;
	return hieu;
}
PHANSO PHANSO::operator*(PHANSO x){
	PHANSO tich;
	tich.tu = this->tu * x.tu;
	tich.mau = this->mau * x.mau;
	return tich;
}
PHANSO PHANSO::operator/(PHANSO x){
	PHANSO thuong;
	if (this->mau == 0 || x.mau == 0){
		cout<<"Khong hop le"<<endl;
		return PHANSO(0,1);
	}
	thuong.tu = this->tu * x.mau;
	thuong.mau = this->mau * x.tu;
	return thuong;
}
int main(){
	PHANSO a  = PHANSO(4,8);
	PHANSO b = PHANSO(4,6);
//	>,  <, >=, <= , == , !=
	PHANSO c  = a + b;
	PHANSO d  = a - b;
	PHANSO e  = a * b;
	PHANSO f  = a / b;
	cout<<"PHANSO a = ";
	a.toiGian();
	a.xuat();
	cout<<"PHANSO b = ";
	b.toiGian();
	b.xuat();
	
	cout<<"================"<<endl;
	cout<<"PHANSO tong = ";
	c.toiGian();
	c.xuat();
	cout<<"================"<<endl;
	cout<<"PHANSO hieu = ";
	d.toiGian();
	d.xuat();
	cout<<"================"<<endl;
	cout<<"PHANSO tich = ";
	e.toiGian();
	e.xuat();
	cout<<"================"<<endl;
	cout<<"PHANSO thuong = ";
	f.toiGian();
	f.xuat();
	return 0;
}


