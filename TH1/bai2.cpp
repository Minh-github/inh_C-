#include <iostream>
#include <string.h>
#include<iomanip>

using namespace std;

class thi_sinh{
	public:
		string name;
		float toan,ly,hoa;
		thi_sinh(){
			name = "";
			toan,ly,hoa =0;
		}
		~thi_sinh(){
			name = "";
			toan,ly,hoa =0;
		}
	public:
		void nhap(){
			cout << "nhap vao ho ten: ";
			fflush(stdin);
			getline(cin,name);
			cout << "nhap vao diem toan: ";
			fflush(stdin);
			cin >> toan;
			cout <<"nhap vao diem ly: ";
			fflush(stdin);
			cin >> ly;
			cout <<"nhap vao diem hoa ";
			cin >> hoa;
		}
		void xuat(){
			float tong = (toan+ly+hoa);	
			if(tong >= 18){
				cout << endl << setw(0) <<  name << setw(10) << toan << setw(15) << ly << setw(15) << hoa << setw(15) << tong << endl;		
			}		
		}
};

int main(){
	thi_sinh ts[100];
	int n;
	cout << "nhap so luong sinh vien:";
	cin >> n;
	for(int i=0; i<n; i++){
		cout << "----------------nhap thong tin-------------" << endl;
		cout << "Sinh vien: "<<i+1<<endl;
		ts[i].nhap();	
	}
	cout << endl << setw(0) <<  "Ten" << setw(10) << "Toan" << setw(15) << "Ly" << setw(15) << "Hoa" << setw(15) << "Tong";
	for(int i=0; i<n; i++){
		ts[i].xuat();
	}
	
	return 0;
}
