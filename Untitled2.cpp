#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

struct benh__vien{
	string fullName;
	string address;
	char khoa[100];
	int day;
	char tim[100];
};

int main(){
	struct benh__vien BN[100];
	int n;
	cout << "nhap vao so luong benh nhan";
	cin >> n;
	cout << "nhap thong tin cho benh nhan\n";
	for(int i = 0; i < n; i++){
		cout << "benh nhan " << i+1 << endl;
		cout << "ho ten benh nhan: ";
		fflush(stdin);
		getline(cin, BN[i].fullName);
		cout << "dia chi benh nhan:";
		fflush(stdin);
		getline(cin, BN[i].address);
		cout << "khoa:";
		fflush(stdin);
		gets(BN[i].khoa);
		cout << "so ngay nam vien:";
		cin >> BN[i].day;
	}
	cout << "nhap thanh cong \n";
			cout << "nhap khoa can tim";
			fflush(stdin);
			gets(BN[0].tim);
			for(int i =0;i < n; i++){
				if(0 == stricmp(BN[0].tim,BN[i].khoa)){
					cout << "name: " << BN[i].fullName << "\n";
					cout << "dia chi: " << BN[i].address << "\n";
					cout << "khoa: " << BN[i].khoa<< "\n";
					cout << "so ngay nam vien: " << BN[i].day<< "\n";
				}
			}
	return 0;
}
