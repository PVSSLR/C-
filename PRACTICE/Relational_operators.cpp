

#include<iostream>
using namespace std;

bool  greater_than {5>3};
bool  lesser_than {2<3};
bool  greater_than_equal {5>=5};
bool  lesser_than_equal {5<=5};
bool  equal_too {5==5};

int main() {
	cout<<boolalpha;
	cout<<greater_than<<endl;
	cout<<lesser_than<<endl;
	cout<<greater_than_equal <<endl;
	cout<<lesser_than_equal<<endl;
	cout<<equal_too<<endl;
}
