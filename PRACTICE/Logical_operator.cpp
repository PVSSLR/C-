
//Logical Operator  AND-&& OR-|| NOT-!

#include<iostream>
using namespace std;

int a{1};
int b{10};
int num{5};
bool test{};

 
int main() {
//Using NOT
	
	cout<< not 1<< endl;
	cout<< not 0<<endl;
	//Alternative
	cout<< ! 1 <<endl;
	cout<< ! 0 <<endl;
//Using AND
	cout<<boolalpha;
    test = num>a && num<b;
	cout<<test<<endl;
//Using OR
	test = num>a || num>b;
	cout<<test<<endl;
  
}
