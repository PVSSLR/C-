//simple inc0eament 

#include<iostream>
using namespace std;
int add1{20};
int add2{20};
int output1{0};
int output2{0};
int main() {
	cout<<add1<<endl;
	cout<<add2<<endl;
	output1 = ++add1; //it initially add  1 to itself and then to output1 aswell
	output2 = --add2;
	cout<<output1<<endl;
	cout<<output2<<endl;
}
