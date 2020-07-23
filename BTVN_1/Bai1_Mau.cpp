#include <iostream>
#include <math.h>
using namespace std;

class HinhTron{
	public:
		float r; // Thuộc tính bán kính
		float chuVi(){ // phương thức tính chu vi
			return 2*M_PI*r;
		}
		float dienTich(){// phương thức tính diện tích
			return M_PI*r*r;
		}
};
int main(){
	HinhTron a; // khai báo đối tượng a
	cout<<"nhap ban kinh: ";
	cin>>a.r; // nhập bán kính cho đối tượng a
	cout<<"Chu vi: "<<a.chuVi()<<endl; // in ra chu vi
	cout<<"Dien Tich: "<<a.dienTich();// in ra diện tích
	return 0;
}

