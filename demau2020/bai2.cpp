#include<iostream>

using namespace std;

class nguoi{
    public:
        string cmt, name, que;
        int namSinh;

        nguoi(){

        }
        nguoi(string _cmt, string _name, int _namSinh){
            cmt = _cmt;
            name = _name;
            namSinh = _namSinh;
        }

        void set_cmt(string temp){
            cmt = temp;
        }
        void set_name(string temp){
            name = temp;
        }
        void set_namSinh(int temp){
            namSinh = temp;
        }
        void set_que(string temp){
            que = temp;
        }

        string get_cmt(){
            return cmt;
        }
        string get_name(){
            return name;
        }
        string get_que(){
            return que;
        }
        int get_namSinh(){
            return namSinh;
        }

        void nhap(){
        cout << "nhap cmnd: ";
        fflush(stdin);
        getline(cin, cmt);
        cout << "ten: ";
        fflush(stdin);
        getline(cin, name);
        cout << "nam sinh: ";
        cin >> namSinh;
        };

        void xuat(){
            cout << "CCCD: " << cmt << " ||";
            cout << name << " ||";
            cout << "SN: " << namSinh << " ||";
        }
};


