#include<iostream>
using namespace std;
class people {
	public:
		
		string name;
		int age;
		string address;
	people() {
		name = " ";
		age = 0;
		address = " ";
	}
	~people() {
		name = " ";
		age = 0;
		address = " ";
	}
		void set() {
			cout<<"Nhap ten:";
			fflush(stdin);
			getline(cin,name);
			cout<<"Nhap tuoi:";
			cin>>age;
			cout<<"Nhap dia chi: ";
			fflush(stdin);
			getline(cin,address);
		}
		void get() {
	 cout<<"\tTen: "<<name<<endl;
	 cout<<"\tTuoi: "<<age<<endl;
	 cout<<"\tDia chi: "<<address<<endl;
	}
	
	
};
class student:public people {
	private: 
	string id;
	float math,physical,chemistry;
	
	public:
		void setStudent() {
		cout<<"Nhap ma sinh vien: ";
		fflush(stdin);
		getline(cin,id);
		set();
        cout<< "Nhap diem toan,ly,hoa: ";
        cin>>math>>physical>>chemistry;
	}
	void getStudent() {
	 cout<<"\tMa Sinh Vien: "<<id<<endl;
	 get();
	 cout<<"\tDiem toan: "<<math<<endl;
	 cout<<"\tDiem ly: "<<physical<<endl;
	 cout<<"\tDiem hoa: "<<chemistry<<endl;
	 cout<<"\tDiem trung binh cua sinh vien la: "<<GPA()<<endl;
	}
	float GPA() {
		float dtb = (math+physical+chemistry)/3;
		return dtb;
	}
	
};
int main(){
student st;
st.setStudent();
st.getStudent();


return 0;
}
