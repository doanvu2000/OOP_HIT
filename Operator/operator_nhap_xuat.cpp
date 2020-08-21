#include <iostream>
using namespace std;
class PHANSO{
	private:
		int tu, mau;
	public:
//		>>: nhap, <<:xuat
		friend istream &operator>>(istream &is,PHANSO &x);
		friend ostream &operator<<(ostream &os,PHANSO x);	
};
istream &operator>>(istream &is, PHANSO &x){
	cout<<"nhap tu so: ";
	is>>x.tu;
	cout<<"nhap mau so: ";
	is>>x.mau;
	return is;
}
ostream &operator<<(ostream &os, PHANSO x){
	os<<x.tu<<"/"<<x.mau<<endl;
	return os;
}
int main(){
	PHANSO a;
	cin>>a;
	cout<<"PHANSO vua nhap: "<<endl;
	cout<<a;
	return 0;
}

