#include <iostream>
#include <vector>

using namespace std;
vector <vector<int>> vector_2d   // vector in a vector will create a 2d vector 
{
	{1,2,3},
	{4,5,6},
	{7,8,9},
	{4,5,6}
};
int main() {
	cout<<vector_2d.at(0).at(0)<<endl;
	cout<<vector_2d.at(2).at(2)<<endl;
	cout<<vector_2d [2] [2]<<endl;
	cout<<vector_2d.size()<<endl;
	cout<<vector_2d.at(3).at(2)<<endl;
	cout<<vector_2d [3] [3]<<endl;
}
