#include <iostream>
#include <string.h>
#include<iomanip>
using namespace std;

class sinh_vien{
	public:
		string name;
		int birth;
		string lop;
		
		sinh_vien(){
			name ="";
			birth =0;
			lop ="";
		}
		~sinh_vien(){
		name ="";
		birth =0;
		lop ="";
		}
	public:
		void nhap(){
			cout <<"nhap ten sinh vien: ";
			fflush(stdin);
			getline(cin,name);
			cout <<"nhap nam sinh: ";
			fflush(stdin);	
			cin >> birth;		
			cout <<"nhap lop: ";
			fflush(stdin);
			getline(cin,lop);
		}
		void xuat(){
			cout << "ten: "<< name << endl;
			cout << "lop: "<< lop <<endl;
			cout << "nam sinh: "<< birth <<endl;
			int tuoi = 2021 - birth;
			cout << "tuoi: "<< tuoi <<endl;
		}
};

class the_muon:public sinh_vien{
	public:
		int id,id_sach;
		string ngay_muon,ngay_tra;		
		
		the_muon(){
			id,id_sach=0;
			ngay_muon,ngay_tra="";
		}
		~the_muon(){
			id,id_sach=0;
			ngay_muon,ngay_tra="";
		}
	public:
		void the_nhap(){
			nhap();
			cout << "nhap so phieu: ";
			fflush(stdin);
			cin >> id;
			cout << "nhap so hieu sach:";
			fflush(stdin);
			cin >> id_sach;
			cout << "nhap ngay muon:";
			fflush(stdin);
			getline(cin,ngay_muon);
			cout << "nhap ngay tra:";
			fflush(stdin);
			getline(cin,ngay_tra);
	}
		void the_xuat(){
			xuat();
			cout << "Ma so phieu: "<< id<<endl;
			cout << "ngay muon: "<< ngay_muon<<endl;
			cout << "ngay tra: "<< ngay_tra<<endl;
			cout << "Ma so sach: "<< id_sach<<endl;
		
		}
		
};

int main(){
	the_muon pp;
	pp.the_nhap();
	cout << "\n---------------------------------\n";
	pp.the_xuat();
	
	return 0;
}
