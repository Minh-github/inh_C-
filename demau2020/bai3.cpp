#include<iostream>
#include"bai2.cpp"

using namespace std;

class sinhVien:public nguoi{
    public:
        string maSv;
        string nganhHoc;

        sinhVien(){
            
        }
        SinhVien(string _cmt, string _name, int _namSinh, string _maSv, string _nganhHoc){
            set_cmt(_cmt);
            set_name(_name);
            set_namSinh(_namSinh);

            maSv = maSv;
            nganhHoc = _nganhHoc;
        };

        void nhapSV(){
            nhap();
            cout << "nhap maSV: ";
            fflush(stdin);
            getline(cin, maSv);
            cout << "nhap nganh hoc: ";
            fflush(stdin);
            getline(cin, nganhHoc);
        };
        void xuatSV(){
            xuat();
            cout << "MaSV: " << maSv << " ||";
            cout << "Nganh hoc: " << nganhHoc << endl;
        };

        void operator=(const sinhVien&sv){
            set_cmt(sv.cmt);
            set_name(sv.name);
            set_que(sv.que);
            set_namSinh(sv.namSinh);
            maSv = sv.maSv;
            nganhHoc = sv.nganhHoc;
        }
};
