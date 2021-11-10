#include<iostream>
#include<Windows.h>
using namespace std;

class DATE{
	public:
		int ngay, thang, nam;
		void nhap(){
			cout << "nhap ngay: ";
			cin >> ngay;
			cout << "nhap thang: ";
			cin >> thang;	
			cout << "nhap nam: ";
			cin >> nam;		
		};
		void xuat(){
			cout << "thoi gian nhap: " << ngay << "-" << thang << "-"	<< nam << "||";
		};
};

class PHIEUNHAP :public DATE{
	public:
		string tenHang;
		int soLuong;
		void nhapPhieu(){
			cout << "nhap vao ten hang: ";
			fflush(stdin);
			getline(cin,tenHang);
			nhap();
			cout << "nhap vao so luong hang: ";
			cin >> soLuong;
		};
		void xuatPhieu(){
			cout << "ten hang: " << tenHang << "||";
			xuat();
			cout << "so luong: "<< soLuong << "Kg" << endl;
		};
};

int main(){
	int n;
	PHIEUNHAP sp[100];
	cout << "nhap vao so luong san pham: ";
	cin >> n;
	cout << "=========NHAP THONG TIN CHO SAN PHAM===========" << endl;
	for(int i=0; i<n; i++)
		{
			cout << "=====SAN PHAM " << i+1 << "========" << endl;
			sp[i].nhapPhieu();
		}
	system("cls");
	cout << "=========BANG THONG TIN CHO SAN PHAM===========" << endl;
	for(int i=0; i<n; i++)
		{
			cout << i+1 << "||";
			sp[i].xuatPhieu();
		}
		cout << "=========BANG THONG TIN CHO SAN PHAM TREN 100 KG===========" << endl;
	for(int i=0; i<n; i++)
		{
			if(sp[i].soLuong >= 100){
				sp[i].xuatPhieu();
			}
		}
	return 0;
}
