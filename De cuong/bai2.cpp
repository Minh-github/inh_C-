#include<iostream>
#include<math.h>
using namespace std;
class daGiac{
	public:	 
	int n;
	float doDai[100];

		daGiac() {
			
		}
		~daGiac() {
			
		}
		nhapDaGiac() {
			cout<<"Nhap vao so canh:";
			cin>>n;
			cout<<"Nhap vao do dai cac canh cua da giac \n";
			for(int i = 0 ; i < n ; i++) {
				cout<<"Canh thu "<<i+1<<": ";
				cin>>doDai[i];
			}
		}
		xuatDaGiac() {
			cout<<"Do dai cac canh\n";
			for(int i = 0 ; i < n; i++) {
				cout<<"\nCanh "<<i<<" : "<<doDai[i];
			}
			cout<<"\n-------------------------";
			cout<<"\nChu vi : "<<chuVi();
		}
		float chuVi() {
			float tong=0;
			for(int i = 0 ; i < n ; i++) {
				tong = tong + doDai[i];
			}
			return tong;
		}
};
class tamGiac: public daGiac {
	public:
	bool check() {
		if( n==3 ){
			if((doDai[0] > doDai[1]+ doDai[2]) || (doDai[1] > doDai[0]+ doDai[2]) || (doDai[2] > doDai[1]+ doDai[0])) {
				return false;
			}else {
				return true;
			}
		}
		return false;
		}
	void dienTich() {
		float S;
		float p;
		p = chuVi()/2;
		if(check() == true) {
			S = sqrt(p*(p-doDai[0])*(p-doDai[1])*(p-doDai[2]));
				cout<<"\n-------------------------";
				cout<<"\nDien Tich Tam Giac: "<<S;
		}
	
	}
};
int main(){
tamGiac tg;
tg.nhapDaGiac();
tg.xuatDaGiac();
tg.dienTich();


return 0;
}
