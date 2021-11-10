#include<iostream>
#include<Windows.h>
using namespace std;

class may{
	public:
		float trongLuong;
		int nam;
		string hang;
};

class mayInKim :public may{
	public:
		int soKim, tocdo; 
		void nhapkim(){
			cout << "nhap vao trong luong may: ";
			cin >> trongLuong;
			cout << "nhap vao nam san xuat: ";
			cin >> nam;
			cout << "nhap ten hang: ";
			fflush(stdin);
			getline(cin,hang);
			cout << "nhap vao so kim: ";
			cin >> soKim;
			cout << "nhap vao toc do in(trang/s): ";
			cin >> tocdo;
		};
		void xuatkim(){
			cout << "trong luong: "<< trongLuong << "||";
			cout << "nam sx: "<< nam << "||";	
			cout << "hang sx: "<< hang << "||";	
			cout << "so kim: "<< soKim << "||";	
			cout << "toc do: "<< tocdo << "trang/s" << endl;	
		};
};

class mayInLaze :public may{
	public:
		int px, tocdolz;
		void nhaplz(){
			cout << "nhap vao trong luong may: ";
			cin >> trongLuong;
			cout << "nhap vao nam san xuat: ";
			cin >> nam;
			cout << "nhap ten hang: ";
			fflush(stdin);
			getline(cin,hang);
			cout << "nhap vao do phan giai: ";
			cin >> px;
			cout << "nhap vao toc do in(trang/s): ";
			cin >> tocdolz;
		};
		void xuatlz(){
			cout << "trong luong: "<< trongLuong << "||";
			cout << "nam sx: "<< nam << "||";	
			cout << "hang sx: "<< hang << "||";	
			cout << "do phan giai: "<< px << "||";	
			cout << "toc do: "<< tocdolz << "trang/s" << endl;	
		};
};

int main(){
	int n;
	int m;
	mayInKim kim[10];
	mayInLaze laze[10];
	cout << "nhap vao so luong may in kim: ";
	cin >> n;
	cout << "=========NHAP THONG TIN CHO MAY IN KIM===========" << endl;
	for(int i=0; i<n; i++)
		{
			cout << "=====MAY " << i+1 << "========" << endl;
			kim[i].nhapkim();
		}
	cout << "nhap vao so luong may in laze: ";
	cin >> m;
	cout << "=========NHAP THONG TIN CHO MAY IN LAZE===========" << endl;
	for(int i=0; i<m; i++)
		{
			cout << "=====MAY " << i+1 << "========" << endl;
			laze[i].nhaplz();
		}
	system("cls");
	cout << "=========BANG THONG TIN CHO CAC MAY IN KIM===========" << endl;
	for(int i=0; i<n; i++)
		{
			cout << i+1 << "||";
			kim[i].xuatkim();
		} 
		cout << "=========BANG THONG TIN CHO CAC MAY IN LAZE===========" << endl;
	for(int i=0; i<m; i++)
		{
			cout << i+1 << "||";
			laze[i].xuatlz();
		} 
	return 0;
}
