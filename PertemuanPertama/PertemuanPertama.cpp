#include <iostream>
using namespace std;

int main()
{
	//begin
	    // numeric nJejari, nLuas
	    // display ' Masukan Jejari= '
	    // accept nJejari
	    // compute nLuas = 3.14 * r * r
	    // display 'Luasnya = ' +nLuas
	//end

	double nJejari, nLuas;
	cout << "Masukan Jejari = ";
	cin >> nJejari;
	nLuas = 3.14 * nJejari * nJejari;
	cout << "Luasnya = " << nLuas << endl;


   system("pause");	
}
