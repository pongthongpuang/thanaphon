#include <iostream>
#include <string>
using namespace std;
void ListStudent(int ns,string arname[],int score[]);
char Calgrade(int score);
int main()
{
	int ns ;
	string name[100];
	int score[100];
	
	cout<<"Input Number of Student : ";
	cin>>ns;
	for(int i=1;i-1<ns;i++)
		{
			cout<<"Input Name : ";
			cin>>name[i];
			cout<<"Input score "<<i<<": ";
			cin>>score[i];
			cout<<endl;
		}
	ListStudent(ns,name,score);
	return 0 ;
}

void ListStudent(int ns,string name[100],int score[100])
{
	for(int i=1;i-1<ns;i++)
	cout<<"Studen Name : "<<name[i]<<"\t"<<"Score "<<i<<" = "<<score[i]<<"  You grade is "<<Calgrade(score[i])<<endl;
}

char Calgrade(int score)
{
	char grade = ' ';
	if(score>=80 && score<=100)
		grade = 'A';
	else if (score>=70 && score<=79)
		grade = 'B';
	else if (score>=60 && score<=69)
		grade = 'C';
	else if (score>=50 && score<=59)
		grade = 'D';
	else
		grade = 'F';
	
	return (grade);
}