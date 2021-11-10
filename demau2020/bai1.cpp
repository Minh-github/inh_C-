#include<iostream>

using namespace std;

class nguoi
{
public:
    string cccd, hoTen;
    int namSinh;
    nguoi(){
        cccd = "";
        hoTen = "";
        namSinh = 0;
    };
    ~nguoi(){
        cccd = "";
        hoTen = "";
        namSinh = 0;
    };
    void setCccd(string cccd){
        cccd = cccd;
    };
    void setHoten(string hoTen){
        hoTen = hoTen;
    };
    void setNamSinh(int namSinh){
        namSinh = namSinh;
    };

    string getCccd()
    {
        return cccd;
    }
    string getHoTen()
    {
        return hoTen;
    }
    int getNamSinh()
    {
        return namSinh;
    }
    nguoi(string cccd, string hoTen, int namsinh)
        {
            setCccd(cccd);
            setHoten(hoTen);
            setNamSinh(namSinh);
        }
    void nhap(){
        cout << "nhap cmnd: ";
        fflush(stdin);
        getline(cin, cccd);
        cout << "ten: ";
        fflush(stdin);
        getline(cin, hoTen);
        cout << "nam sinh: ";
        cin >> namSinh;
    };
    void xuat(){
        cout << "CCCD: " << cccd << " ||";
        cout << hoTen << " ||";
        cout << "SN: " << namSinh << " ||";
	}
	void tuoi(){
		int tuoi = 2021 - namSinh;
		cout << tuoi << " Tuoi";
	}
};

class SinhVien : public nguoi
{
public:
    string maSV, nganhHoc;
    SinhVien(){
        maSV = "";
        nganhHoc = "";
    };
    ~SinhVien(){
        maSV = "";
        nganhHoc = "";
    };

    void nhapSV(){
        nhap();
        cout << "nhap maSV: ";
        fflush(stdin);
        getline(cin, maSV);
        cout << "nhap nganh hoc: ";
        fflush(stdin);
        getline(cin, nganhHoc);
    };
    void xuatSV(){
        xuat();
        cout << "MaSV: " << maSV << " ||";
        cout << "Nganh hoc: " << nganhHoc << endl;
    };

};

int main()
{
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    SinhVien nguoi[n], temp;
    cout << "Nhap danh sach sinh vien" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "sinh vien " << i+1 <<endl;
            nguoi[i].nhapSV();
        }
    cout << "Danh sach sinh vien" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << i+1;
            nguoi[i].xuatSV();
        }
    for (int i = 0; i < n; i++)
    {
        cout << nguoi[i].hoTen;
    }
    
    return 0;
};




