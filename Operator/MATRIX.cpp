#include <iostream>
using namespace std;
class MATRIX{
	private:
		int m,n;
		int **arr;
	public:
		void nhap();
		void xuat();
		MATRIX operator+(MATRIX x){
			MATRIX y;
			if (this->m != x.m || this->n != x.n){
				cout<<"2 ma tran khong cung cap"<<endl;
				return *this;
			}
			y.m = x.m;
			y.n = x.n;
			y.arr = new int*[y.m];
			for(int i=0;i<y.m;i++){
				y.arr[i] = new int[y.n];
			}
			for(int i=0;i<y.m;i++){
				for(int j=0;j<y.n;j++){
					y.arr[i][j] = this->arr[i][j] + x.arr[i][j];
				}
			}
			return y;
		}
		MATRIX operator*(MATRIX x){
			MATRIX y;
			if (this->n != x.m ){
				cout<<"khong nhan duoc 2 ma tran"<<endl;
				return *this;
			}
			y.m = this->m;
			y.n = x.n;
			y.arr = new int*[y.m];
			for(int i=0;i<y.m;i++){
				y.arr[i] = new int[y.n];
			}
			for(int i=0;i<this->m;i++){
				for(int j=0;j<x.n;j++){
					y.arr[i][j] = 0;
					for(int k=0;k<x.m;k++){
						y.arr[i][j] += (this->arr[i][k]*x.arr[k][j]);
					}
				}
			}
			return y;
		}
};
void MATRIX::nhap(){
	cout<<"nhap hang: ";cin>>m;
	arr = new int*[m];
	cout<<"nhap cot: ";cin>>n;
	for(int i=0;i<m;i++){
		arr[i] = new int[n];
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"arr["<<i<<"]["<<j<<"] = ";
			cin>>arr[i][j];
		}
	}
}
void MATRIX::xuat(){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	MATRIX a,b,c;
	a.nhap();
	b.nhap();
	c = a*b;
	cout<<"Matran A: "<<endl;
	a.xuat();
	cout<<"Matran B: "<<endl;
	b.xuat();
	cout<<"Matran C: "<<endl;
	c.xuat();
	return 0;
}

