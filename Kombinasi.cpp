#include <iostream>
using namespace std;

void kombinasi (string x, int b, int c){
	if(b==0){
		cout << x << " ";
	}
	else {
		for (int i=97; i<97+c; i++){
			kombinasi(x+(char)i ,b-1,c);
		}
	}
}
main()
{
	int jum, mix;
	cout << "Masukkan Jumlah Karakter : "; cin >> jum;
	mix=jum;
	kombinasi("",mix,mix);
	cout << " ";
}

