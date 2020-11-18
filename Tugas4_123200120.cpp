#include <iostream> 
using namespace std;

int main(){
	int opsi,angka1,angka2;
	int a = 1;
	char pilihan;

	do {
		cout << "\nPerkalian dan Perpangkatan=====" << endl;
		cout << "1. Perkalian" << endl;
		cout << "2. Perpangkatan" << endl;

		cout << "\nPilih :"; cin >> opsi;

		switch (opsi){
			case 1: 
				cout << "\nInput Angka Pertama\t: "; cin >> angka1;
				cout << "Input Angka Kedua\t: "; cin >> angka2;

				cout << "\nHasil " << angka1 << " x " << angka2 << " adalah : " << endl;

				do{
					cout << angka2;
					a++;
						if (a <= angka1){
							cout << " + ";}
						else { 
							cout << " = ";
							int hasil_kali = angka2;
							for (int a = 1; a < angka1;a++){
								hasil_kali = hasil_kali + angka2;}
						cout << hasil_kali << endl;}
				}while (a <= angka1);
				cout << "\nUlangi Perhitungan?(Y/N): "; cin >> pilihan;
				cin.get();
			break;

			case 2: 
				cout << "\nInput Angka Pertama\t: "; cin >> angka1;
				cout << "Input Angka Kedua\t: "; cin >> angka2;

				cout << "\nHasil " << angka1 << "^" << angka2 << " adalah : " << endl;

				do{
					cout << angka1;
					a++;
						if (a <= angka2){
							cout << " * ";}
						else { 
							cout << " = ";
								int hasil_pangkat = angka1;
								for (int a = 1; a < angka2;a++){
									hasil_pangkat = hasil_pangkat * angka1;}
						cout << hasil_pangkat << endl;}
				}while (a <= angka2);
				cout << "\nUlangi Perhitungan?(Y/N): "; cin >> pilihan;
			break;

			default: 
				cout << "\nInput yang Anda Masukkan Salah!!" << endl;
				cout << "\nUlangi Input?(Y/N): "; cin >> pilihan;
			break;}
	}while(pilihan == 'Y' || pilihan == 'y');

	cin.get();

	cout << "\nTERIMAKASIH TELAH MENGGUNAKAN APLIKASI INI!!" << endl;
	
	cin.get();
	return 0;
}