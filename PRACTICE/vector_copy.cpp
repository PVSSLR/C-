#include <iostream>
#include <vector>

using namespace std;
vector <int> vector1 {};
vector <int> vector2 {};
vector <vector<int>> vector_2d {};
int main() {
	vector1.push_back(10);
	vector1.push_back(20);
	cout<<vector1.at(0)<<endl;
	cout<<vector1.at(1)<<endl;
	cout<<vector1.size()<<endl;
	cout<<"FOR VECTOR 2 "<<endl;
	vector2.push_back(100);
	vector2.push_back(200);
	cout<<vector2.at(0)<<endl;
	cout<<vector2.at(1)<<endl;
	cout<<vector2.size()<<endl;
	cout<<"FOR 2D VECTOR"<<endl;
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	cout<<vector_2d.at(0).at(0)<<endl;
	cout<<vector_2d.at(0).at(1)<<endl;
	cout<<vector_2d.at(1).at(0)<<endl;
	cout<<vector_2d.at(1).at(1)<<endl;
	cout<<"NOW CHANGING VECTOR1 TO 1000"<<endl;
	vector1.at(0) = 1000;
	cout<<vector_2d.at(0).at(0)<<endl;
	cout<<vector_2d.at(0).at(1)<<endl;
	cout<<vector_2d.at(1).at(0)<<endl;
	cout<<vector_2d.at(1).at(1)<<endl;
	cout<<"Displaying element in vector 1"<<endl;
	cout<<vector1.at(0)<<endl;
	cout<<vector1.at(1)<<endl;

}
