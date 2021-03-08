#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

void input(string* ptrMonthNamme, string* ptrSalesFig) {
	for (int i = 0; i < 6; i++) {
		cout << "\n\n Masukkan Angka Penjualan : " << *ptrMonthNamme << " : ";
		cin >> *ptrSalesFig;

		cout << "\t Lokasi Memori : " << &ptrSalesFig;
		ptrSalesFig++;
		ptrMonthNamme++;
	}
}

double totaling(string* ptrSalesFig) {
	double sales = 0;
	
	for (int i = 0; i < 6; i++) {
		double temp = 0;

		string s = *ptrSalesFig;
		const char* ctemp = s.c_str();

		ctemp++;
		temp = atof(ctemp);
		sales += temp;

		ptrSalesFig++;
	}

	return sales;
}

void listing(string* ptrMonthNamme, string* ptrSalesFig) {
	for (int i = 0; i < 6; i++) {
		cout << "\n Penjualan untuk " << *ptrMonthNamme << " : " << *ptrSalesFig;
		ptrMonthNamme++;
		ptrSalesFig++;
	}
}

int main() {

	string  monthsName[] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun" };
	string salesFigures[6];

	input(monthsName, salesFigures);
	cout << " \n\n Total Penjualan : " << totaling(salesFigures);
	listing(monthsName, salesFigures);

	_getch();
	return 0;
}