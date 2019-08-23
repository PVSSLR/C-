#include <iostream>
using namespace std;
int room_length{0};
int room_breadth{0};

int main() {
	cout<<"Enter the room length: "<<endl;
	cin>>room_length;
	cout<<"Enter the room breadth"<<endl;
	cin>>room_breadth;
	cout<<"The Area of the room is: "<<room_breadth * room_length<<endl;
	return 0;
}
