#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	//--INPUT JUMLAH--

	int n;

	cout << "Masukkan banyak angka : "; cin >> n;

	//--DEKLARASI--

	int a[n], c[n];
	int b = a[0];
	int max, min;
	float r;

	//--DISPLAY ANGKA--

	for(int i = 0; i < n; i++){
		cout << "Angka ke-" << (i + 1)  << "\t: "; 
		cin >> a[i];
	}

	cout << "\n____Hasil____" << endl;

	//--DERET--

	cout << "Deret\t\t: "; 
		for(int i = 0; i < n; i++){
			cout << a[i] << " "; 
		}
	cout << endl;

	//--MAKSIMUM--

	cout << "Maksimum\t: ";
		max = a[0];
			for(int i = 0; i < n; i++){
				if(max < a[i]){
					max = a[i];
				}
			}
	cout << max << endl;

	//--MINIMUM--

	cout << "Minimum\t\t: ";
		min = a[0];
			for(int i = 0; i < n; i++){
				if(min > a[i]){
					min = a[i];
				}
			}
	cout << min << endl;

	//--RATA RATA--

	cout << "Rata-rata\t: ";
		for(int i; i < n; i++){
			b = b + a[i];
		}

	r = b/n;

	cout << setprecision(3) << r << endl;

	//--SELISIH--

	cout << "Selisih Max\t: ";
		for(int i = 0; i < (n - 1); i++){
			if(a[i] >= a[i + 1]){
				c[i] = a[i] - a[i + 1];
			}else if(a[i] < a[i + 1]){
				c[i] = a[i + 1] - a[i];
			}
		}

		int d = c[0];
			for(int i = 0; i < (n - 1); i++){
				if(d < c[i]){
					d = c[i];
				}
			}

	cout << d << endl;

	system("pause");
	return 0;
}