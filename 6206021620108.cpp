#include <iostream>
#include <time.h>
using namespace std;
bool checkNum (int,int,int);

int main(int input)
{
	srand( time(0) );
	int num = rand()%10+1;
	int A = 0;
	cout << "###Welcome to guessing number game###\n";
	cout << "Secret number has been chosen\n";
	bool done = true;
	do {
		int input ;
		cout << "Guess the number (1 to 10): ";
		cin >> input;
		A++;
		done = checkNum(num,input,A);
		}while(done);
}

bool checkNum(int num,int input,int A)
{
	if(num == input)
	{	
		cout<<"Congratulation!"<<endl;
		cout<<"The secret number is "<<input<<endl;
		cout<<"You made "<<A<<" guesses"<<endl;
		return(false);
	}
	else if (num<input)
	{	
		cout<<"The secret number is hight"<<endl;
		return(true);}
	else 
	{cout<<"The secret number is lower"<<endl;
		return(true);
	}
}