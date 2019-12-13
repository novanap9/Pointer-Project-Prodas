#include <iostream>
#include <stdlib.h>
using namespace std;

int faktorial(int nilai)
{
	int* PtrNilai = &nilai;
	if (*PtrNilai == 1)
	{
		return 1;
	}
	else
	{
		return *PtrNilai * faktorial(*PtrNilai - 1);
	}
}

int main()
{
	do
	{		cout << "Program Created By Novan 013";
		system("cls");
		cout << "Program Untuk Mencari Nilai Faktorial" << endl << endl;
		system("pause");
		system("cls");
		cout << "Masukkan Angka: ";
		int x, pilih;
		int* PtrX = &x;
		int* PtrPilih = &pilih;
		cin >> *PtrX;
		system("cls");
		cout << "Hasil Faktorial Dari " << *PtrX << " Adalah " << faktorial(*PtrX) << endl << endl;
		system("pause");
		system("cls");
		cout << "Keluar Program?" << endl << endl;
		cout << "1. Ya \n2. Tidak" << endl << endl;
		cout << "Pilihan: ";
		cin >> *PtrPilih;
		if (*PtrPilih == 1)
		{
			break;
		}
		else if (*PtrPilih == 2)
		{

		}
	} while (true);
}
