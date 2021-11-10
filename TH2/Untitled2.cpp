#include<iostream>
#include<string.h>

using namespace std;

class Nguoi{
	public:
		string name, address;
		int born;
		Nguoi(){
			name = "";
			address = "";
			born = 0;
		}
		~Nguoi(){
			name = "";
			address = "";
			born = 0;
		}
		void nhap(){
			cout << "nhap vao ten: ";
			fflush(stdin);
			getline(cin, name);
			cout << "nhap vao dia chi: ";
			fflush(stdin);
			getline(cin, address);
			cout << "nhap vao nam sinh: ";
			cin >> born;
		}
		void xuat(){
			cout << "ten: " << name << "Dc" << address << born ;
		}
		
};
class NhanSu : public Nguoi{
	public:
		int id, id_chucVu, id_luong;
		float luongCoBan;
		void NS_nhap(){
			nhap();
			cout << "nhap vao ma nhan su: ";
			cin >> id;
			cout << "nhap vao he so chuc vu: ";
			cin >> id_chucVu;
			cout << "nhap vao he so luong: ";
			cin >> id_luong;
		}
		void NS_xuat(){
			xuat();
			cout << "ID: " << id << "ID chuc vu: " << id_chucVu << "he so luong" << id_luong << endl;
		}
		NhanSu(){
			luongCoBan = 1,5;
		}
		void Luong(){
			int luong;
			luong = (id_luong + id_chucVu) * luongCoBan - id_luong * luongCoBan * (5/100);
			cout << luong << "Trieu";
		}
};
int main(){
	NhanSu ns[10];
	Nguoi nguoi[10];
	int n;
	cout << "nhap vao so luong nhan su: ";
	cin >> n;
	for(int i=0;i<n;i++){
		cout << "-------Nhan vien " << i+1 << endl;
		ns[i].NS_nhap();
	}
	for(int i=0;i<n;i++){
		cout << "-------Nhan vien " << i+1 << endl;
		ns[i].NS_xuat();
		ns[i].Luong();
	}
		
	return 0;
}




