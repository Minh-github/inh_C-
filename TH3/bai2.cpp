#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <iostream>
#include <iomanip> 
using namespace std;
class DATE
{
    public:
        int ngay,thang,nam;
    public:
        DATE()
        {
            ngay,thang,nam=0;
        }
        ~DATE()
        {
            ngay,thang,nam=0;
        }
        void nhap()
        {
            cout<<"Nhap Ngay: ";
            cin>>ngay;
            cout<<"Nhap Thang: ";
            cin>>thang;
            cout<<"Nhap Nam: ";
            cin>>nam;
        }
        void xuat()
        {
            cout<<setw(10)<<" "<<ngay<<"/"<<thang<<"/"<<nam<<" ";
        }
};


class NHANSU:public DATE
{
    public:
        int CMND;
        char ten[25];
    public:
         NHANSU()
        {
            CMND=0;

        }
        ~NHANSU()
        {
            CMND=0;

        }
        void nhap()
        {
            cout<<"Ten: ";
            fflush(stdin);
            gets(ten);
            cout<<"Ngay Thang Nam Sinh "<<endl;
            DATE::nhap();
            cout<<"So CMND: ";
            cin>>CMND;
        }
        void xuat()
        {
            cout<<"Ten: "<<ten;
            DATE::xuat();
            cout<<"CMND: "<<setw(10)<<CMND<<endl;
        }
};


int main()
{
    NHANSU ns[100], temp;
    int n;
    cout<<"Nhap so luong nhan su: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ns[i].nhap();
    }
    for(int i=0;i<n;i++)
    {
        ns[i].xuat();
    }


for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
         if(strcmp(ns[i].ten,ns[j].ten)>0){
            strcpy(temp.ten,ns[i].ten);
            strcpy(ns[i].ten,ns[j].ten);
            strcpy(ns[j].ten,temp.ten);
         }
      }
  }

    cout<<"DAY SAP XEP TANG DAN THEO TEN: "<<endl;
    cout<<"=====TEN====="<<"=====NGAY SINH====="<<"=====CMND====="<<endl;
    for(int i=0;i<n;i++)
    {
        ns[i].xuat();
    }


}
