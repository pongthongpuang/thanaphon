#include <iostream>
#include <string>
using namespace std;
int main(){
	int score;
	cout << "input score : ";
	cin >> score;
	if(score > 100){
		cout << "Error number more score"<< endl;
	} 
	else if(score >= 90){
		cout << "Your grade : A" << endl;
	} 
	else if(score >= 80){
		cout << "Your grade : B"<< endl;
	} 
	else if(score >= 70){
		cout << "Your grade : C"<< endl;
	} 
	else if(score >= 60){
		cout << "Your grade : D"<< endl;
	} 
	else if(score >= 0){
		cout << "Your grade : F"<< endl;
	} 
	else{
	cout << "Error input number"<< endl;
	}
	return 0;
}