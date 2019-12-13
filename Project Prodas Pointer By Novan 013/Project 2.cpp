#include <iostream>
using namespace std;

int main()
{
	do
	{
		double matriks1[100][100], matriks2[100][100], hasil[100][100];
		int a, b, c, baris1, kolom1, baris2, kolom2, pilih, jumlah = 0;
		int* PtrBaris1 = &baris1;
		int* PtrBaris2 = &baris2;
		int* PtrKolom1 = &kolom1;
		int* PtrKolom2 = &kolom2;
		int* PtrPilih = &pilih;
		int* PtrJumlah = &jumlah;
		system("CLS");
		cout << "Perkalian Matriks" << endl << endl;
		system("pause");
		system("CLS");
		cout << "1. Lanjutkan \n2. Tidak" << endl << endl;
		cout << "Pilih: ";
		cin >> *PtrPilih;
		if (*PtrPilih == 1)
		{
			system("CLS");
			cout << "Masukkan Baris Matriks Pertama: ";
			cin >> *PtrBaris1;
			cout << "Masukkan Kolom Matriks Pertama: ";
			cin >> *PtrKolom1;
			cout << endl;
			system("cls");
			cout << "Matriks Ordo " << *PtrBaris1 << " x " << *PtrKolom1 << endl;
			cout << "\nYakin?" << endl << endl;
			cout << "1. Ya \n2. Tidak" << endl;
			cout << "\nPilihan: ";
			cin >> *PtrPilih;
			if (*PtrPilih == 1)
			{
				system("cls");
			}
			else if (*PtrPilih == 2)
			{
				continue;
			}
			cout << "Masukkan Baris Matriks Kedua: ";
			cin >> *PtrBaris2;
			cout << "Masukkan Kolom Matriks Kedua: ";
			cin >> *PtrKolom2;
			cout << endl;
			system("cls");
			cout << "Matriks Ordo " << *PtrBaris2 << " x " << *PtrKolom2 << endl;
			cout << "\nYakin?" << endl << endl;
			cout << "1. Ya \n2. Tidak" << endl;
			cout << "\nPilihan: ";
			cin >> *PtrPilih;
			if (*PtrPilih == 1)
			{
				system("cls");
			}
			else if (*PtrPilih == 2)
			{
				continue;
			}

			if (*PtrKolom1 != *PtrBaris2) {
				cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
			}
			else
			{
				cout << "Matriks Pertama" << endl << endl;
				for (a = 0; a < *PtrBaris1; a++)
				{
					for (b = 0; b < *PtrKolom1; b++)
					{
						cout << "Masukkan baris ke " << a << " kolom ke " << b << ": ";
						cin >> matriks1[a][b];
					}
					cout << endl;
				}
				for (a = 0; a < *PtrBaris1; a++)
				{
					for (b = 0; b < *PtrKolom1; b++)
					{
						cout << matriks1[a][b];
					}
					cout << endl;
				}
				cout << endl;
				system("pause");
				system("CLS");
				cout << "Matriks Kedua" << endl << endl;
				for (a = 0; a < *PtrBaris2; a++)
				{
					for (b = 0; b < *PtrKolom2; b++)
					{
						cout << "Masukkan baris ke " << a << " kolom ke " << b << ": ";
						cin >> matriks2[a][b];
					}
					cout << endl;
				}
				for (a = 0; a < *PtrBaris2; a++)
				{
					for (b = 0; b < *PtrKolom2; b++)
					{
						cout << matriks2[a][b];
					}
					cout << endl;
				}
				cout << endl;
				system("pause");
				system("CLS");
				for (a = 0; a < *PtrBaris1; a++)
				{
					for (b = 0; b < *PtrKolom2; b++)
					{
						for (c = 0; c < *PtrBaris2; c++)
						{
							*PtrJumlah = *PtrJumlah + matriks1[a][c] * matriks1[c][b];
						}
						hasil[a][b] = *PtrJumlah;
						*PtrJumlah = 0;
					}
				}
				cout << "Hasil Perkalian Matriks: " << endl << endl;
				for (a = 0; a < *PtrBaris1; a++)
				{
					for (b = 0; b < *PtrKolom1; b++)
					{
						cout << hasil[a][b] << "\t";
					}
					cout << endl;
				}
			}
			cout << endl;
			system("pause");
			system("CLS");
			cout << "Keluar Program?" << endl;
			cout << "1. Ya \n2. Tidak" << endl << endl;
			cout << "Pilih: ";
			cin >> *PtrPilih;
			cout << endl;
			if (*PtrPilih == 1)
			{
				break;
			}
			else if (*PtrPilih == 2)
			{

			}
		}
		else if (*PtrPilih == 2)
		{
			break;
		}
	} while (true);
}

//Program Has Created by Novan 013 D4 MI 19A
