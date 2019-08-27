 #include <iostream>
#include <vector>

using namespace std;
vector <int> num {1,2,3,4,5};
int main() {
	cout<<num[0]<<endl; 
	cout<<num.at(3)<<endl;
	num.push_back(6); 
    cout<<num[5]<<endl;
} 
