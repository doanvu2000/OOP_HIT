#include <iostream>
#include <math.h>
using namespace std;

class HinhTron{
	public:
		float r; // thuoc tinh ban kinh
		float chuVi(){ // phuong thuc tinh chu vi
			return 2*M_PI*r;
		}
		float dienTich(){//phuong thuc tinh dien tich
			return M_PI*r*r;
		}
};
int main(){
	HinhTron a; // khai bao doi tuong a
	cout<<"nhap ban kinh: ";
	cin>>a.r; // nhap ban kinh cho doi tuong a
	cout<<"Chu vi: "<<a.chuVi()<<endl; // in ra chu vi
	cout<<"Dien Tich: "<<a.dienTich();// in ra dien tich
	return 0;
}

