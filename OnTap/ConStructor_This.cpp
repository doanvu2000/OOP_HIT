#include <iostream>
using namespace std;
class SoPhuc{
	private:
		int thuc;
		int ao;
	public:
		SoPhuc(){
			thuc = ao = 0;	
		}
		SoPhuc(int thuc, int ao){
			this->thuc = thuc;
			this->ao = ao;
		}
		void nhap();
		void xuat();
};
void SoPhuc::nhap(){
	cout<<"\tNhap phan thuc: ";
	cin>>thuc;
	cout<<"\tNhap phan ao: ";
	cin>>ao;
}
void SoPhuc::xuat(){
	cout<<thuc;
	if (ao >= 0){
		cout<<" + "<<ao<<"i"<<endl;
	}else cout<<ao<<"i"<<endl;	
}
int main(){
//	SoPhuc a;
//	SoPhuc a = SoPhuc(2,3);
//	a.xuat();
	int n;
	cout<<"\tNhap so luong so phuc: ";
	cin>>n;
	//SoPhuc x[n];
	SoPhuc *x = new SoPhuc[n];
	for(int i = 0; i < n; i++){
		cout<<"\t Nhap thong tin so phuc thu "<<i+1<<" : "<<endl;
		x[i].nhap();
	}
	cout<<endl<<"\tThong tin danh sach: "<<endl;
	for(int i = 0; i < n; i++){
		x[i].xuat();
	}
	return 0;
}

