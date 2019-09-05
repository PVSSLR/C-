//Taper ratio

#include<iostream>
using namespace std;
double c_r{};
double c_t{};
double lambda{};
int main() {
	cout<<"chord root: ";
	cin>>c_r;
	cout<<"chord tip: ";
	   cin>>c_t;
	   lambda = c_t/c_r;
	if (lambda>0) 
		cout<<"rectangular or trapizoidal wing "<<lambda<<endl;
	else 
	  cout<<"concorde or triangular wing "<<endl;
	return 0;
}	
     
   
