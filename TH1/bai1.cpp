#include <iostream>
#include<string.h>

using namespace std;

class people{
	public:
			string id;
			string name;
			int birth;
			
			people(){
				id ="";
				name ="";
				birth =0;
			}	
			~people(){
				id ="";
				name ="";
				birth =0;
			}			
	public:
			void nhap(){
				cout << "nhap vao so CCCD";
				fflush(stdin);
				getline(cin,id);
				cout << "nhap vao ho ten";
				fflush(stdin);	
				getline(cin,name);
				cout << "nhap vao nam sinh";
				fflush(stdin);
				cin >> birth;
			}
			void xuat(){
				cout << "\tSo CCCD: "<<id<<endl;
				cout << "\tTen: "<<name<<endl;
				cout <<"\tSinh nam: "<<birth<< endl;			
				int tuoi = 2021 - birth;	
				cout <<"\tNam nay: " << tuoi <<" tuoi"<<endl; 
	}
};

int main(){
	people pp;
	pp.nhap();
	pp.xuat();
	
	return 0;
}
