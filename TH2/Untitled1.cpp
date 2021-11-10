#include<iostream>
#include<math.h>

using namespace std;

class Diem{
	public:
		int x,y;
		Diem(){
			x = 0;
			y = 0;
		}
		~Diem(){
			x = 0;
			y = 0;
		}
		void nhap(){
			cout << "nhap vao diem x : ";
			cin >> x;
			
			cout << "nhap vao diem y : ";
			cin >> y;
		}
		void xuat(){
			cout << "toa do diem 1 ( " << x << "," << y << ")" << endl; 
		}
};

int main(){
	Diem point[10];
	float temp;
	for(int i = 0; i < 2; i++){
		point[i].nhap();
	}
	temp = sqrt(pow((point[0].x - point[1].x),2) + pow((point[0].y - point[1].y),2));
	cout << "Khoang cac giu hai diem la :" << temp;
	
	return 0;
}
