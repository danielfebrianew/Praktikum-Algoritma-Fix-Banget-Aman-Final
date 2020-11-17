#include <iostream>

using namespace std;

int main(){
	int opsi,p,l,t;
	char pilihan;

	do{
		cout << "Gambar Bangun Datar======" << endl;

		cout << "1. Kotak Bolong" << endl;
		cout << "2. Segitiga" << endl << endl;

		cout << "Pilih : "; cin >> opsi;
		cout << endl;

		switch(opsi){
			case 1:
				cout << "Panjang Kotak\t: "; cin >> p;
				cout << "Lebar Kotak\t: "; cin >> l;
				cout << endl;
					for(int i = 1; i <= p; i++){
						for(int j = 1; j <= l; j++){
							if (i == 1 || i == p || j == 1 || j == l ){
								cout << "#";
							}else {
								cout << " ";
							}
						}
						cout << endl;
					}
					cout << "\n\nApakah anda ingin membuat persegi lagi?(Y/N)";
					cin >> pilihan;
				break;
			case 2:
				cout << "Tinggi Segitiga : "; cin >> t;
				cout << endl;
					for(int i = 1; i <= t; i++){
						for(int j = 1; j <= i; j++){
							cout << j;
						}
					cout << endl;
					}
					cout << "\n\nApakah anda ingin menmbuat segitiga lagi?(Y/N)";
					cin >> pilihan;
				break;
			default:
				cout << "Periksa Kembali Pilihan Anda!!" << endl;
				cout << "\nApakah anda ingin mencoba lagi?(Y/N)";
				cin >> pilihan;
				break;
		}
	}while(pilihan == 'y' || pilihan == 'Y');

	cout << endl;

	cout << "TERIMAKASIH TELAH MENGGUNAKAN APLIKASI INI!!" << endl;

	system("pause");
	return 0;
}