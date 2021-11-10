#include <iostream>

using namespace std;

class thucPham{
	public:
		string tenTP;
		float giaTP;
		void nhapTP(){
			cout << "nhap ten san pham: ";
			fflush(stdin);
			getline(cin,tenTP);
			cout << "nhap gia san pham: ";
			cin >> giaTP;
		};
		void xuatTP(){
			cout << "ten: " << tenTP;
			cout << " gia: " << giaTP << "k";
		};
};

class tpHop: public thucPham{
	public:
		int soHop;
		void nhapHop(){
			nhapTP();
			cout << "nhap vao so luong hop: ";
			cin >> soHop;	
		};
		void xuatHop(){
			xuatTP();
			cout << " so luong: " << soHop << ": hop" << endl;	
		};
};

class tpKhop: public thucPham{
	public:
		float khoiLuong;
		void nhaptpKhop(){
			nhapTP();
			cout << "nhap vao khoi luong: ";
			cin >> khoiLuong;	
		};
		void xuatKhop(){
			xuatTP();
			cout << " so luong: " << khoiLuong << ": KG" << endl;	
		};
};

int main(){
	tpHop hop;
	tpKhop kHop;
	cout << "=================nhap thuc pham dong hop==================" << endl;
	hop.nhapHop();
	cout << "=================thuc pham dong hop==================" << endl;
	hop.xuatHop();
	cout << "=================nhap thuc pham khong dong hop==================" << endl;
	kHop.nhaptpKhop();
	cout << "=================thuc pham khong dong hop==================" << endl;
	kHop.xuatKhop();
	
	return 0;
}
