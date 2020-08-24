#include <iostream>
using namespace std;
class PS{
	private:
		int tu, mau;
	public:
		PS(){
			tu = mau = 1;
		}
		PS(int tu, int mau){
			this->tu = tu;
			this->mau = mau;
		}
		PS operator+(PS b);
		void nhap();
		void xuat(){
			cout<<tu<<"\\"<<mau<<endl;
		}
};
PS PS::operator+(PS b){
	PS tong;
	//PS1: this, PS2: b
	tong.tu = this->tu*b.mau + this->mau*b.tu;
	tong.mau = this->mau * b.mau;
	return tong;
}
int main(){
//	int a = 3, b = 6;// 3.3 + 4.1
//	cout<<"tong nguyen = "<<sum(a , b)<<endl;
//	cout<<"tong thuc = "<<sum_double(3.3, 4.1)<<endl;
//	cout<<"tong thuc = "<<sum(3.3, 4.1)<<endl;
//	int a = 6;
//	a++;
//	a--;
//	+, - , *, /, %, >, <, ==, ..
	PS a(1,2), b(2,3);
	PS tong = a + b;
	tong.xuat();
	return 0;
}
//int sum(int x, int y){
//	return x+y;
//}
//double sum(double x, double y){
//	return x+y;
//}
//double sum_double(double x, double y){
//	return x+y;
//}
