#include<iostream>
using namespace std;
 
 
class nguoi
{
    public:
        string hoten;
        string diachi;
        int namsinh;

    nguoi(){
        hoten=" ";
        diachi=" ";
        namsinh=0;
    }

    nguoi(string hoten, string diachi, int namsinh){
        hoten=" ";
        diachi=" ";
        namsinh=0;
    } 

    public:
        void nhap(){
            fflush(stdin);
            cout<<"Nhap ho va ten: ";
            getline(cin, hoten);
            cout<<"Nhap dia chi: ";
            getline(cin, diachi);
            cout<<"Nhap nam sinh: ";
            cin>>namsinh;
        }

        void xuat(){
            cout<<"Ho va ten: "<<hoten<<endl;
            cout<<"Dia chi: "<<diachi<<endl;
            cout<<"Nam sinh: "<<namsinh<<endl;
        }
};

class sinhvien:public nguoi
{
    public:
        string msv;
        string lop;
        int diem1;
        int diem2;
        int diem3;

    sinhvien(){
        msv=" ";

    }

    public:
        void nhap(){

            fflush(stdin);
            cout<<"nhap ma sinh vien: ";
            getline(cin, msv);
            cout<<"nhap ten lop: ";
            getline(cin, lop);
            cout<<"nhap diem: "<<endl; cin>>diem1>>diem2>>diem3;
        }

        void xuat(){

            cout<<"Ma sinh vien: "<<msv<<endl;
            cout<<"Ten lop: "<<lop<<endl;
            cout<<"diem 1 2 3: "<<endl<<diem1<<endl<<diem2<<endl<<diem3<<endl;
            cout<<"Diem trung binh: "<<diemtrungbinh();
        }

        float diemtrungbinh(){
            float dtb;
            dtb=(diem1+diem2+diem3)/3;
            return dtb;
        }

};

int main(){
    nguoi abj;
    abj.nhap();
    abj.xuat();

    sinhvien obj;
    obj.nhap();
    obj.xuat();
}
