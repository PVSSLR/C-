#include <iostream>

using namespace std;
const float tax{0.06};
const int day{30};
int small_room{0},large_room{0};
int main() {
	cout<<"Welcome to Sunil carpet cleaning service\n\n";
	cout<<"Enter the no of small rooms :";
	cin>> small_room;
	cout<<"Enter the no of large rooms: ";
	cin>> large_room;
	cout<<"Charges: ";
	cout<<"/nTax is: $"<< tax*day*(small_room + large_room)<<endl;
	cout<<"Total Estimate is: $"<< (small_room*25)*(large_room*35)+(tax*day*(small_room + large_room));
	cout<<endl;
	return 0;
}
