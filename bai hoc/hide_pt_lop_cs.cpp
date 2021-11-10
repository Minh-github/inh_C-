// hide phuong thuc cua lop co so

#include<iostream>

using namespace std;

class Mamal{
	public:
		void Move(){
			cout << "Mamal moves 1 step" << endl;
		}
		void Move(int d){
			cout << "Mamal move" <<d<< "steps" << endl;
		}
};

class Dog: public Mamal{
	public:
		void Move(){
			cout << "Dog move 1 step" << endl;
		}
};

int main(){
	Mamal m;
	Dog d;
	m.Move();
	m.Move(10);
	d.Move();
//	d.Move(10); loi
}
