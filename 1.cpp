/*------------------------------------------*/
/*	BISMILLAHIRAHMANIRROHIM					*/
/*	Program Latihan BAB 5					*/
/*	Oleh : AGUS WIBOWO						*/
/*	Program : Data NIM						*/
/*	Semangat Belajar Terus Jangan Capek Gan */
/*	----------------------------------------*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	string n1, k2, l3, o4, p5;
	long long m1, m2, m3, m4, m5;

	cout << setw(42) << "Silahkan Masukkan Data Dibawah Ini ! " << endl;

	{	/*1*/
		cout << "Nama : ";
			getline(cin, n1);
		cout << "NIM : ";
			cin >> m1;

		/*2*/
		cin.ignore(255, '\n');
		cout << "Nama : ";
			getline(cin, k2);
		cout << "NIM : ";
			cin >> m2;
	

		/*3*/
		cin.ignore(255, '\n');
		cout << "Nama : ";
			getline(cin, l3);
		cout << "NIM : ";
			cin >> m3;
	

		/*4*/
		cin.ignore(255, '\n');
		cout << "Nama : ";
			getline(cin, o4);
		cout << "NIM : ";
			cin >> m4;
	

		/*5*/
		cin.ignore(255, '\n');
		cout << "Nama : ";
			getline(cin, p5);
		cout << "NIM : ";
			cin >> m5;
	}

	{
		cout << setw(24) << "H A S I L !" << endl;

		cout << setiosflags(ios::left) << setw(28) << "N A M A"
			<<	resetiosflags(ios::left) 
			<< setiosflags(ios::left) << setw(18) << "N I M"
			<< resetiosflags(ios::left)
			<< endl;

		cout << setiosflags(ios::left) << setw(28) << n1
			<< resetiosflags(ios::left)
			<< setiosflags(ios::left) << setw(18) << m1
			<< resetiosflags(ios::left)
			<< endl;

		cout << setiosflags(ios::left) << setw(28) << k2
			<< resetiosflags(ios::left) 
			<< setiosflags(ios::left) << setw(18) << m2
			<< resetiosflags(ios::left)
			<< endl;

		cout << setiosflags(ios::left) << setw(28) << l3
			<< resetiosflags(ios::left) 
			<< setiosflags(ios::left) << setw(18) << m3
			<< resetiosflags(ios::left)
			<< endl;

		cout << setiosflags(ios::left) << setw(28) << o4
			<< resetiosflags(ios::left) 
			<< setiosflags(ios::left) << setw(18) << m4
			<< resetiosflags(ios::left)
			<< endl;

		cout << setiosflags(ios::left) << setw(28) << p5
			<< resetiosflags(ios::left) 
			<< setiosflags(ios::left) << setw(18) << m5
			<< resetiosflags(ios::left)
			<< endl;
	}
		
	return 0;
}
