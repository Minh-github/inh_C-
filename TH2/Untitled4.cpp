#include<iostream>
#include<string.h>
#include<windows.h>
using namespace std;

class sinhVien{
	public:
		string name;
		char className[30];
		int born;
		void nhap(){
			cout << "nhap vao ten: ";
			fflush(stdin);
			getline(cin, name);
			cout << "nhap vao ten lop: ";
			fflush(stdin);
			cin >> className;
			cout << "nhap vao nam sinh: ";
			cin >> born;
		}
		void xuat(){
			cout << "Ten: " << name << endl;
			cout << "lop: " << className << endl;
		}
};

class the: public sinhVien{
	public:
		int id_phieu, id_sach;
		string ngay_muon, ngay_tra;
		
		void thenhap(){
			nhap();
			cout << "nhap vao so phieu muon: ";
			cin >> id_phieu;
			cout << "nhap vao so hieu sach: ";
			cin >> id_sach;
			cout << "nhap vao ngay muon: ";
			fflush(stdin);
			getline(cin,ngay_muon);
			cout << "nhap vao ngay tra: ";
			fflush(stdin);
			getline(cin,ngay_tra);
		}
		
		void thexuat(){
			xuat();
			cout << "ma so phieu: " << id_phieu << endl;
			cout << "ma sach: " << id_sach << endl;
			cout << "ngay muon: " << ngay_muon << endl;
			cout << "ngay tra: " << ngay_tra << endl;
		}
		
};
int main(){
	the t[100];
	int n;
	int x = 0;
	cout << "nhap vao so luong sinh vien: ";
	cin >> n;
	
	for(int i=0;i<n;i++){
		t[i].thenhap();
	}
	system("cls");
	cout << "Danh sach sinh vien co the muon cua lop K3A:" << endl;
	for(int i=0;i<n;i++){
		if(stricmp(t[i].className,"K3A") == 0){
			cout << "stt" << x+1 << endl;
			t[i].thexuat();
			x++;
		}
	}
	cout << "so luong the lop K3A: " << x;
}




