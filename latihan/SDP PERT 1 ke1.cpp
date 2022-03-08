//Ryan Ramadhan 1
#include<iostream>
#include<conio.h>

using namespace std;

main (){
	int x;
	int *px;

	x=2;
	px=&x; //membaca alamat memori dari x

	cout<<"Nilai x  :"<<x<<endl;
	cout<<"Nilai *p :"<<*px<<endl;
	cout<<"Nilai px (alamat x) :"<<px<<endl;
}

