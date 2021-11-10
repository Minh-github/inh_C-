#include <iostream>
#include <string.h>
#include<iomanip>
using namespace std;

class khach_hang{
	public:
		string name,so_congto;
		int so_nha;
		khach_hang()
        {
            name ="";
            so_congto ="";
			so_nha=0;	
        }
		~khach_hang()
        {
            name ="";
            so_congto ="";
			so_nha=0;	
        }
	public:
		void nhap(){
			cout <<"Nhap ten chu nha: ";
			fflush(stdin);
			getline(cin,name);
			cout <<"Nhap ma so cong to: ";
			fflush(stdin);
			getline(cin,so_congto);
			cout <<"Nhap so nha: ";
			fflush(stdin);
			cin >> so_nha;
		}
		void xuat(){
			cout << setw(20) << left << name << "|"<< setw(12) << right << so_congto << "|"<< setw(7) << right << so_nha << "|";
		}
};

class bien_lai:public khach_hang{
	public:
		int so_cu,so_moi;
		bien_lai()
        {
            so_cu =0;
            so_moi =0;
        }
		~bien_lai()
        {
            so_cu =0;
            so_moi =0;
        }
	public:
		void nhap_bien_lai(){
			nhap();
			cout << "So dien cu: ";
			fflush(stdin);
			cin >> so_cu;
			cout << "So moi: ";
			fflush(stdin);
			cin >> so_moi;
		}
		void xuat_bien_lai(){
			xuat();
			float tien = (so_moi-so_cu)*2000;
			cout<< setw(6) << right << so_cu << "|"<< setw(7) << right << so_moi << "|"<< setw(20) << right << tien << "VND" << endl;
		}
};

int main(){
	int n;
	bien_lai pp[100];
	cout <<"Nhap vao so luong ho gia dinh: ";
	cin >> n;
	for(int i=0;i<n;i++){
		cout <<"\n--------------Nhap Thong tin-----------------\n";
		cout <<"--------------Nha "<<i+1<<"-------------------------\n";
		pp[i].nhap_bien_lai();		
	}
	cout <<"\n---------------------------------------\n";
	cout << setw(4) << left << "Stt|" << setw(20) << left <<"Ten chu nha          |" << setw(12) << right <<"so cong to|"
	 << setw(7) << right <<"so nha|" << setw(6) << right << "so cu|" << setw(7) << right << "so moi|"<< setw(20) << right << "tien"<<endl;
	 
	 
	for(int i=0;i<n;i++){
		cout << setw(4) << left << i+1;
		pp[i].xuat_bien_lai();
	}
	
	return 0;
}
