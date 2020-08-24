#include <iostream>
using namespace std;
class ARRAY{
	private:
		int *a;
		int n;
	public:
		void operator++();
		void operator--();
		friend istream& operator >>(istream &is, ARRAY &x); // nhap
		friend ostream& operator <<(ostream &os, ARRAY x); // xuat
};
istream& operator  >>(istream &is, ARRAY &x){
	cout<<"\tNhap so phan tu: "	;
	is>>x.n;
	x.a = new int[x.n];
	for(int i=0;i<x.n;i++){
		cout<<"a["<<i<<"] = ";
		is>>x.a[i];
	}
	return is;
}
ostream& operator <<(ostream &os, ARRAY x){
	for(int i=0;i<x.n;i++){
		os<<x.a[i]<<" ";
	}
	os<<endl;	
	return os;
}
void ARRAY::operator++(){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if (a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void ARRAY::operator--(){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if (a[i] < a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main(){
//	++ tang dan 
//	-- giam dan
	ARRAY x;
	cin>>x;
	system("cls");
	++x;
	cout<<"Mang sau khi sap xep tang dan: ";
	cout<<x;
	--x;
	cout<<"Mang sau khi sap xep giam dan: ";
	cout<<x;
	return 0;
}

