#include <iostream>
#include <string>
using namespace std;

int main()
{	int nim;
	float uts,uas,ratarata;
	string nama;

	cout << "Nama 	: "; getline(cin,nama);
	cout << "NIM 	: "; cin >> nim;
	cout << "UTS 	: "; cin >> uts;
	cout << "UAS 	: "; cin >> uas;
	cout << endl;

	cout << "Hai!! Nama Saya " << nama;
	cout << " dan NIM saya adalah " << nim << endl << endl;
	
	ratarata = ((uts + uas)/2);
	cout << "Jadi, nilai akhir saya adalah " << ratarata;
	cout << endl << endl;

	system("pause");
	return 0;
}