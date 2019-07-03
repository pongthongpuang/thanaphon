#include<iostream>
using namespace std;
int main()
{
	float money,dollar,Euro,Yen,Dong,Ponds;
	cout << "Input Thai Baths : ";
	cin >> money;
	dollar = money*0.033;
	Euro = money*0.029;
	Yen = money*3.52;
	Dong = money*760.63;
	Ponds = money*0.026;
	cout << "****Exchange Rate****\n";
	cout << money <<" Baths is " << dollar <<" dollars\n";
	cout << money <<" Baths is " << Euro <<" Euro.\n";
	cout << money <<" Baths is " << Yen <<" Yen.\n";
	cout << money <<" Baths is " << Dong <<" Dong.\n";
	cout << money <<" Baths is " << Ponds <<" Ponds.\n";
	return(0);
}