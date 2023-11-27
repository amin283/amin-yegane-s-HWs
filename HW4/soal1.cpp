#include <iostream>
using namespace std;

main(){
	int a,b,total,  multi, subtract; //multiplication:multi
	int remainder;
	cout << "enter two numbers:";
	cin >> a >> b;
	
	total=a+b;
	subtract=a-b;
	multi=a*b;
	remainder=a%b;

  cout << "the total of the two numbers is: " << total << endl;
  cout << "the subtraction of the two numbers is: " << subtract << endl;
  cout << "the multiplication of the two numbers is: " << multi << endl;
  cout << "the remainder of the division of the two numbers is: " << remainder << endl;
}
