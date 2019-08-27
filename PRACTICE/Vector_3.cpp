#include <iostream>
#include <vector>
using namespace std;
int score;
vector <int> test{5,4,3};
int main() {
	cout<<"Score card"<<endl;
	cout<<"Enter the  number1: ";
    cin>>test[0];
	cout<<"Enter the  number2: ";
	cin>>test[1];
	cout<<"Enter the  number3: ";
	cin>>test[2];
	cout<<"The Test score are "<<test[0]<<" ,"<<test[1]<<" ,"<<test[2]<<endl;
	cout<<"Enter a additional numeber: ";
	cin>>score;
	test.push_back(score);
	cout<<"There are "<<test.size()<<endl;
} 
