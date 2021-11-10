#include<iostream>
#include<Windows.h>
using namespace std;

class XE{
	public:
		string brand;
		float price;
		char date[15];
};

class OTO : public XE{
	public:
		int choNgoi;
		float taiTrong;
		void nhap(){
			cout << "nhap thuong hieu xe: ";
			fflush(stdin);
			getline(cin, brand);
			cout << "nhap vao gia xe ($): ";
			cin >> price;
			cout << "nhap vao doi xe: ";
			fflush(stdin);
			gets(date);	
			cout << "nhap so cho ngoi cua xe: ";
			cin >> choNgoi;
			cout << "nhap vao tai trong cua xe: ";
			cin >> taiTrong;
		};
		void xuat(){
			cout << "thuong hieu: " << brand << "||";
			cout << "gia xe: " << price << "$ ||";
			cout << "nam san xuat: " << date << "||";
			cout << "so ghe: " << choNgoi << "||";
			cout << "Trong tai: " << taiTrong <<":tan" << endl;
		};
};

int main(){
	OTO oto[10];
	int n;
	cout << "nhap vao so so luong xe:";
	cin >> n;
	cout << "=========NHAP THONG TIN CHO XE HOI===========" << endl;
	for(int i=0; i<n; i++)
		{
			cout << "=====XE " << i+1 << "========" << endl;
			oto[i].nhap();
		}
	system("cls");
	cout << "=========BANG THONG TIN CHO XE HOI===========" << endl;
		for(int i=0; i<n; i++)
		{
			cout << i+1 << "||";
			oto[i].xuat();
		}
	return 0;
}
