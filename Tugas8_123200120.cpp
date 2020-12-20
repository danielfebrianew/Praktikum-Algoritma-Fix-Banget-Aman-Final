#include <iostream>
#include <iomanip>
#define phi 3.14

using namespace std;

//--DEKLARASI--

struct declare{
    int r, t;
	short opsi;
	char ulang;
};
declare dc;

//--PILIHAN--

void Pilihan(){
	cout << "\nHitung Lingkaran ==========" << endl;
	cout << "1. Luas Lingkaran" << endl;
	cout << "2. Keliling Tabung" << endl;
	cout << "3. Volume Tabung" << endl << endl;
}

//--LUAS--

float HasilLuas(int x){
	float y;
	y = phi * x * x;
	return y;
}

void Luas(){
	float ll;
	cout << "\nJari-jari\t: "; cin >> dc.r;
	ll = HasilLuas(dc.r);
	cout << "\nLuas Lingkaran adalah " << setprecision(4) << ll << endl << endl;
	cout << "Ulangi Program?(Y/N) : "; cin >> dc.ulang;
}

//--KELILING--

float HasilKeliling(int x){
	float y;
	y = 2 * phi * x;
	return y;
}

void Keliling(){
	float lk;
	cout << "\nJari-jari\t: "; cin >> dc.r;
	lk = HasilKeliling(dc.r);
	cout << "\nKeliling Lingkaran adalah " << setprecision(4) << lk << endl << endl;
	cout << "Ulangi Program?(Y/N) : "; cin >> dc.ulang;
}

//--VOLUME--

float HasilVolume(int x, int y){
	float z;
	z = (phi * x * x) * y;
	return z;
}

void Volume(){
	float vt;
	cout << "\nJari-jari\t: "; cin >> dc.r;
	cout << "Tinggi\t\t: "; cin >> dc.t;
	vt = HasilVolume(dc.r, dc.t);
	cout << "\nVolume Tabung adalah " << setprecision(4) << vt << endl << endl;
	cout << "Ulangi Program?(Y/N) : "; cin >> dc.ulang;
}

//--DEFAULT--

void Default(){
	cout << "\nInput Salah :)" << endl << endl;
	cout << "Ulangi Program?(Y/N) : "; cin >> dc.ulang;
}

//--SWITCH CASE--

void Switch(){
	cout << "Pilih : "; cin >> dc.opsi;

	switch(dc.opsi){
		case 1:
			Luas();
			break;			
		case 2:
			Keliling();
			break;
		case 3:
			Volume();
			break;
		default:
			Default();
			break;	
	}
}

//--MAIN--

int main(){
	do{
		Pilihan();
		Switch();
	}while(dc.ulang == 'y' || dc.ulang == 'Y');

	cout << "\nProgram Selesai, Terimakasih :)" << endl << endl;

	system("pause");
	return 0;
}