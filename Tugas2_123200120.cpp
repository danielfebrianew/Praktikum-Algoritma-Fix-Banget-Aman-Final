#include <iostream>
using namespace std;

int main()
{
	int ayah,ibu,anak1,anak2,tagihan1,tagihan2,tagihan3,tagihan4,total;
	char opsi;

	do{
		cout << "Umur Ayah\t: ";cin >> ayah;
		cout << "Umur Ibu\t: ";cin >> ibu;
		cout << "Umur Anak 1\t: ";cin >> anak1;
		cout << "Umur Anak 2\t: ";cin >> anak2;
	
	//ayah
	if ((ayah <= 12) && (ayah > 0)){
		tagihan1 = 15000 * 30;}
	else if ((ayah > 12) && (ayah <= 20)){
			tagihan1 = 20000 * 30;}
	else if (ayah > 20){
		tagihan1 = 30000 * 30;}

	if ((ibu <= 12) && (ibu > 0)){
		tagihan2 = 15000 * 30;}
	else if ((ibu > 12) && (ibu <= 20)){
			tagihan2 = 20000 * 30;}
	else if (ibu > 20){
		tagihan2 = 30000 * 30;}

	if ((anak1 <= 12) && (anak1 > 0)){
		tagihan3 = 15000 * 30;}
	else if ((anak1 > 12) && (anak1 <= 20)){
			tagihan3 = 20000 * 30;}
	else if (anak1 > 20){
		tagihan3 = 30000 * 30;}

	if ((anak2 <= 12) && (anak2 > 0)){
		tagihan4 = 15000 * 30;}
	else if ((anak2 > 12) && (anak2 <= 20)){
			tagihan4 = 20000 * 30;}
	else if (anak2 > 20){
		tagihan4 = 30000 * 30;}

		total = tagihan1 + tagihan2 + tagihan3 + tagihan4;
		cout << "Maka total jumlah tagihan adalah sekeluarga dalam sebulan adalah sebesar Rp";
		cout << total << ",00";


		cout << "\nApakah anda ingin menghitung lagi? (Y/N)\n\n";
		cin >> opsi;

	}while (opsi == 'y' || opsi == 'Y');

	cin.get();

	cout << "Terimakasih telah menggunakan aplikasi ini!!" << endl;

	system("pause");
	return 0;
}