#include<iostream>
#include<string>
using namespace std;
int main()
{
	char num;
	string name1,nume2;
	int pass1,pass2;
	do{
		cout << "//////////////Menu//////////////"<<endl;
		cout << "1.Reglster"<<endl;
		cout << "2.Login"<<endl;
		cout << "Q.Exit Program"<<endl;
		cout << "________________________________"<<endl;
		cout << "Enter Menu : ";
		cin >> num;
		cout << endl;
		if (num=='1'){
			cout << "************Reglster************\n"<<endl;
			cout << "Input Username : ";
			cin >> name1;
			cout << "Input Password : ";
			cin >> pass1;
			cout << endl;
		}
			else if (num=='2'){
				cout << "*************Login**************\n"<<endl;
				cout << "Input Username : ";
				cin >> nume2;
				cout << "Input Password : ";
				cin >> pass2;
				cout << endl;
			if (name1!=nume2 || pass1!= pass2)
			{
				do{
					cout << "!!!!Username or Password incorrect Please try again!!!!\n"<<endl;
					cout << endl;
					cout << "Input Username : ";
					cin >> nume2;
					cout << "Input Password : ";
					cin >> pass2;
				}	while (name1!=nume2 || pass1!= pass2);
			}
				else { 
					cout << "User and Password Correct ^______^\n" << endl;
			}
		}
				else if(num == 'Q')
			{cout << "Exit Program......"<<endl;}
				}while(num!='Q');
	return(0);
	}

