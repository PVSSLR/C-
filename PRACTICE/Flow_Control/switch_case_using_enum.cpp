#include <iostream>

using namespace std;


int main() {
	enum forces{
	lift, drag, weight, thrust
	};
	aerodynamic_force component {lift};
	switch (component) {
		case lift:
		  cout<<"Lift is the component of the resulatant aerodynamic force which is perpendicular to free stream"<<endl;
		  break;
		case drag:
		  cout<<"Lift is the component of the resulatant aerodynamic force which is parallel to free stream"<<endl;
		   break;
		case weight:
		  cout<<"L = w"<<endl;
		   break;
		case thrust:
		  cout<<"T = D"<<endl;
		   break;
		default:
		   cout<<"Choose btw given option"<<endl;
		    break;
	}		
	return 0;
}
