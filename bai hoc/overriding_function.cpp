//overriding function

#include<iostream>

using namespace std;

class Mamal{
	public:
		void Speek(){
			cout << "Mammal" << end;
		}
};

class Dog: public Mamal{
	public:
		void Speek(){
			cout << "Dog" << endl;
		}
};

int main(){
	Mamal m;
	Dog d;
	m.Speek();
	d.Speek();
}
