#include <iostream>
#include <string>
using namespace std;
float update_balance(int &balance,string choise,float money);

int main ()
{
	int balance = 10000;
	string choise = "";
	float money;
	cout <<"Exit with 0"<<endl;
	cout <<"Your balance = 10,000"<<endl;
	do{
	cout <<"Input command (1 or withdraw, 2 deposit) : ";
	cin>>choise;
	if(choise == "0")
		{
			cout << "Exit Program"<<endl;
			return (0);
		}

		cout << "Input amount = ";
		cin >> money;
		cout << "Your balance = " <<update_balance(balance,choise,money) << endl;
	}while(choise != "0");
	return(0);
}

float update_balance(int &balance,string choise,float money)
{
	if(choise == "1")
	{
		balance -= money;
	}
	else if(choise == "2")
	{
		balance += money;
	}
	return (balance);
}
