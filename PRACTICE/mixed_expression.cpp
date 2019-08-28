//USE STATIC_CAST <TYPE> FOR MODERN C++

#include<iostream>
using namespace std;
int total {};
int num1{}, num2{}, num3{};
const int count{3};
int main() {
	cin>>num1>>num2>>num3;
	double average{0};
	total = num1+num2+num3;
	average = static_cast <double> (total)/count;
	cout<<average<<endl;
}
