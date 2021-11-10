// Nap chong ham

#include<iostream>
#include<conio.h>
using namespace std;


void repeat();
void repeat(char);
void repeat(char, int);

int main(){
	repeat();
	repeat('=');
	repeat('+', 5);
	
	return 0;
}

void repeat(){
	for(int i = 0; i < 10; i++){
		cout << '*' << endl;
	}
}

void repeat(char Ch){
	for(int i = 0; i < 10; i++){
		cout << Ch << endl;
	}
}

void repeat(char Ch, int N){
	for(int i = 0; i < 10; i++){
		cout << Ch << endl;
	}
}
