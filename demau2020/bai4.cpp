#include<iostream>
#include<string.h>
#include"bai3.cpp"

using namespace std;

class quanliSv:public sinhVien{
    public:
        int n;
        sinhVien sv[10];

        quanliSv(){
        };
        quanliSv(sinhVien _sv[10], int _n){
            n = _n;
            for (int i = 0; i < _n; i++)
            {
                sv[i] = _sv[i];
            }
        };

        void nhapDanhSach(){
            cout << "nhap vao so luong sinh vien:";
            cin >> n;
            cout <<  "===== NHAP THONG TIN CHO DANH SACH SINH VIEN====" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << "SV "<< i+1 << endl;
                sv[i].nhapSV();
            }
        };

        void xuatDanhSach(){
            cout << "===== DANH SACH SINH VIEN =====" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << i+1 << "||";
                sv[i].xuatSV(); 
            }
        };

        void search(){
            string temp;
            cout << "nhap ten sinh vien: ";
            getline(cin, temp);

            cout << "ket qua tim kiem: ";
            for (int i = 0; i < n; i++)
            {
                if (strcmp(sv[i].get_name().c_str(),temp.c_str())==0)
                {
                    sv[i].xuatSV();
                }
                
            }
            
        }
};

int main(){
    quanliSv ql;
    ql.nhapDanhSach();
    ql.xuatDanhSach();
    ql.search();
    return 0;
}