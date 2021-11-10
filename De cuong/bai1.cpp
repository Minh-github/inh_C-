#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

class human{
	public:
		string name;
		string address;
		int age;
		
		human(){
			name = "";
			address = "";
			age = 0;
		}
		~human(){
			name = "";
			address = "";
			age = 0;
		}
		void nhap(){
			cout << "Nhap ten cua ban: ";
			fflush(stdin);
			getline(cin,name);
			cout << "Nhap dia chi cua ban: ";
			fflush(stdin);
			getline(cin,address);
			cout << "Nhap vao tuoi cua ban: ";
			fflush(stdin);
			cin >> age;
		}
		void xuat(){
			cout << "Ten :" << name << endl;
			cout<< "D/c :" << address << endl;
			cout << age << "Tuoi" << endl;
		}
};

class sinhVien: public human{
	public:
		string nganh_hoc;
		string khoa;
		sinhVien(){
			nganh_hoc = "";
			khoa = "";			
		}
		~sinhVien(){
			nganh_hoc = "";
			khoa = "";			
		}
		void svNhap(){
			nhap();
			cout << "Nhap vao nganh hoc cua ban: ";
			fflush(stdin);
			getline(cin,nganh_hoc);
			cout << "Nhap vao khoa cua ban: ";
			fflush(stdin);
			getline(cin,khoa);			
		}
		void svXuat(){
			xuat();
			cout << "Nganh :" << nganh_hoc << endl;
			cout << "Khoa :" << khoa << endl;
		}
};

int main(){
	int n;
	cout << "Nhap vao so luong sinh vien: ";
	cin >> n;
	sinhVien sv[100] ,temp[10];
	
	for(int i=0; i<n; i++){
		cout << "_______Nhap thong tin cho sinh vien " << i+1 << "______\n";
		sv[i].svNhap();	
	}
	cout << "________Danh Sach sinh vien gom " << n << " sinh vien______\n";
	for(int i=0; i<n; i++){
		sv[i].svXuat();
	}
	cout << "nhap ten sinh vien can tim: ";
	fflush(stdin);
	getline(cin,temp[0].name);
	for(int i=0; i<n; i++){
		sv[i].svXuat();
		if (0 == stricmp(sv[i].name, temp[0].name)){
			cout << sv[i].svXuat();
		}
	}
	return 0;
}









