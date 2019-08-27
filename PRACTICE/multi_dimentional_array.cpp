//To declare multiple array in c++
// these are like row and colum or like a spreadsheet
//we can access specific cell in the array 
// Its better to use Vectors rather than multi dimentional array

#include <iostream>
using namespace std;
//int row[2] {1,2};
//int column[2] {3,4};
int cell [2] [2]   // [row] [column]
{
	{1,2},
	 {3,4}
};
int main() {
	cout<<cell[1][2]<<endl;  
 }
