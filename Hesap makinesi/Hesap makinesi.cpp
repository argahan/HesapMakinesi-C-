// Hesap makinesi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int topla(int sayi1, int sayi2){
	int sonuc;
	sonuc = sayi1 + sayi2;
	return sonuc;
}
int cýkar(int sayi1, int sayi2){
	int sonuc;
	sonuc = sayi1 - sayi2;
	return sonuc;
}
int carp(int sayi1, int sayi2){
	int sonuc;
	sonuc = sayi1 * sayi2;
	return sonuc;
}
int bol(int sayi1, int sayi2){
	float sonuc;
	sonuc = sayi1 / sayi2;
	return sonuc;
}
int faktoriyel(int sayi){
	int sayac = 1;
	for (int i = 1; i <= sayi; i++){
		sayac = sayac * i;
	}
	return sayac;
}
int usAlma(int sayi1,int sayi2){
	int sayac = sayi1;
	for (int i = 1; i < sayi2; i++){
		sayac=sayac*sayi1;
	}
	return sayac;
}

int _tmain(int argc, _TCHAR* argv[])
{
	float sayi1, sayi2,sonuc;
	char islem;
	cout << "islemler\n topla= +\n cikar= -\n carp= *\n bol= /\n faktoriyel= !\n us alma= ^\n" << endl;
	cout << "1. sayiyi giriniz: ";
	cin >> sayi1;
	cout << "2. sayiyi giriniz: ";
	cin >> sayi2;
	cout << "islemi giriniz: ";
	cin >> islem;

	if (islem == '+')

		cout << "sonuc= "<<topla(sayi1, sayi2) << endl;

	else if (islem == '-')

		cout << "sonuc= " << cýkar(sayi1, sayi2) << endl;

	else if (islem == '*')

		cout << "sonuc= " << carp(sayi1, sayi2) << endl;

	else if (islem == '/')

		cout << "sonuc= " << bol(sayi1, sayi2) << endl;

	else if (islem == '!')
	{
		cout << "1.sayinin faktoriyeli= " << faktoriyel(sayi1) << endl;
		cout << "2.sayinin faktoriyeli= " << faktoriyel(sayi1) << endl;
	}

	else if (islem == '^')
		cout << sayi1 << "^" << sayi2 << "= " << usAlma(sayi1, sayi2) << endl;
	
	else
		cout << "hatali islem girdiniz.Tekrar deneyiniz.";
	

	system("pause");
	return 0;
}

