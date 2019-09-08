//Switch case statement 
//example 1 

#include <iostream>

using namespace std;
int selection{};

int main() {
	cout<<"Enter the number: "<<endl;
    cin>>selection;
	switch (selection) {
		case 1:
		  cout<<"one"<<endl;
		  break;
		case 2:
		  cout<<"Two"<<endl;
		   break;
		case 3:
		  cout<<"Three"<<endl;
		   break;
		case 4:
		  cout<<"Four"<<endl;
		   break;
		default:
		   cout<<"Choose btw 1-4"<<endl;
		    break;
	}		
	return 0;
}

//example 2

#include <iostream>

using namespace std;
char selection{};

int main() {
	cout<<"Enter the number: "<<endl;
    cin>>selection;
	switch (selection) {
		case '1':
		  cout<<"one"<<endl;
		  break;
		case '2':
		  cout<<"Two"<<endl;
		   break;
		case '3':
		  cout<<"Three"<<endl;
		   break;
		case '4':
		  cout<<"Four"<<endl;
		   break;
		default:
		   cout<<"Choose btw 1-4"<<endl;
		    break;
	}		
	return 0;
}
