
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class sinhvien
{
	private: 
		string ten, msv;
		int tuoi;
		float diemtoan, diemvan, diemanh;
	
	public:
		void Nhap();
		void Xuat();
		void DTB();
	
};

void sinhvien :: Nhap()
{
	cout << "Ma sinh vien la: ";
	fflush(stdin);
	cin >> this->msv;
	cout << "Ten sinh vien la: ";
	fflush(stdin); 
	cin >> this->ten;
	cout << "Tuoi cua sinh vien la: ";
	cin >> this->tuoi;
	cout << "Diem toan cua sinh vien la: ";
	cin >> this->diemtoan;
	cout << "Diem van cua sinh vien la: ";
	cin >> this->diemvan;
	cout << "Diem anh cua sinh vien la: ";
	cin >> this->diemanh;
	
}

void sinhvien :: Xuat()
{
	
	cout << endl << setw(-20) << "MSV" << setw(25) << "Ten sinh vien" << setw(10) << "Tuoi" << setw(15) << "Diem toan" << setw(15) << "Diem van" << setw(15) << "Diem anh";
	cout << endl << setw(-20) << this->msv << setw(25) << this->ten << setw(10) << this->tuoi << setw(15) << this->diemtoan << setw(15) << this->diemvan << setw(15) << this->diemanh;
}

void sinhvien :: DTB()
{
	float dtb = (this->diemtoan + this->diemvan + this->diemanh) / 3;
	cout << endl << endl << ">>>Diem trung binh cua sinh vien la: " << dtb << endl;
	
	if (dtb >= 8)				cout << "Xep loai: Gioi";
	if (dtb >= 7 && dtb < 8)	cout << "Xep loai: Kha";
	if (dtb >= 5 && dtb < 7)	cout << "Xep loai: Trung binh";
	if (dtb < 5)				cout << "Xep loai: Yeu";
}

int main()
{
	sinhvien sv;
	sv.Nhap();
	sv.Xuat();
	sv.DTB();
	
	return 0;
}

