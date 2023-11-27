#include <iostream>

using namespace std;

main (){
	float x,y,z,resultS,resultM,R; //"M" mean makhraj
	cout << "enter x:";
	cin >> x;
	cout << "enter y:";
	cin >> y;
	cout << "enter z:";
	cin >> z;
	
	resultS=(x-y)*(x+z);
	resultM=(x*x)+(y*y)+(z*z)+(2*x*y)+(2*x*z)+(2*y*z)+1; //we can also use: (pow((x + y + z), 2) + 1);
	R=resultS/resultM;
	cout << R;
}
