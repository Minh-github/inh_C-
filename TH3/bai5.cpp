#include<iostream>
#include<Windows.h>
using namespace std;

class person{
	public:
		string name;
		char ngaySinh[25];
		string que;
};

class kySu :public person{
	public:
		string nganhHoc;
		int namTN;
		void nhap(){
			cout << "nhap ten: ";
			fflush(stdin);
			getline(cin,name);
			cout << "nhap ngay sinh: ";
			fflush(stdin);
			gets(ngaySinh);
			cout << "nhap que quan: ";
			fflush(stdin);
			getline(cin,que);
			cout << "nhap nganh hoc: ";
			fflush(stdin);
			getline(cin,nganhHoc);
			cout << "nhap nam tot nghiep: ";
			cin >> namTN;	
		};
		void xuat(){
			cout << "ten: " << name << "||";
			cout << "ngay sinh: " << ngaySinh << "||";
			cout << "que quan: " << que << "||";
			cout << "nhanh hoc: " << nganhHoc << "||";
			cout << "nam tot nghiep" << namTN << "||" << endl;
		};
};

int main(){
	int n;
	kySu ks[10], max[1];
	cout << "nhap vao so luong ky su: ";
	cin >> n;
	cout << "=========NHAP THONG TIN CHO KY SU===========" << endl;
	for(int i=0; i<n; i++)
		{
			cout << "=====KY SU " << i+1 << "========" << endl;
			ks[i].nhap();
		}
	system("cls");
	cout << "=========BANG THONG TIN CHO CAC KY SU===========" << endl;
	for(int i=0; i<n; i++)
		{
			cout << i+1 << "||";
			ks[i].xuat();
		} 
	cout << "=========KY SU TOT NGHIEP GAN DAY NHAT===========" << endl;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
		max[1] = ks[i];
			if(ks[j].namTN > max[1].namTN){
				max[1] = ks[j];
			}
		}
	}
	max[1].xuat();
	
	return 0;
}
