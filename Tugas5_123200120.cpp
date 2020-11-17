#include <iostream>

using namespace std;

int main(){
	int opsi,p,l,t;

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
			break;
		default:
			cout << "Periksa Kembali Pilihan Anda!!" << endl;
			break;
	}

	cout << endl;

	system("pause");
	return 0;
}