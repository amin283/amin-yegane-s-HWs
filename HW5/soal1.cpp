#include <iostream>
using namespace std;

 main (){cout << fixed;
float salary,tax,finalSalary;
cout << "enter the salary: ";
cin >> salary;


if (salary < 6000000){
	cout<<"finalSalary is " << salary; }
	
	
else if (salary >= 6000000 && salary <8000000){
	tax=(5*salary)/100;
	finalSalary=salary - tax;
	cout << "finalSalary is "<< finalSalary;}
	
	
else if (salary >= 8000000 && salary <1000000){
	tax=(10*salary)/100;
	finalSalary=salary - tax;
	cout << "finalSalary is "<< finalSalary;}
	
	
	else if (salary >= 1000000 && salary <14000000){
	tax=(15*salary)/100;
	finalSalary=salary - tax;
	cout << "finalSalary is "<< finalSalary;}
	
	
	else if (salary >= 14000000 && salary <18000000){
	tax=(20*salary)/100;
	finalSalary=salary - tax;
	cout << "finalSalary is "<< finalSalary;}
	
	
	else if (salary >= 18000000 && salary <25000000){
	tax=(25*salary)/100;
	finalSalary=salary - tax;
	cout << "finalSalary is "<< finalSalary;}
	
	
	else if (salary >= 25000000){           // should use (>=) otherwise will not calculate 25milion and bigger
	tax=(35*salary)/100;
	finalSalary=salary - tax;
	cout << "finalSalary is "<< finalSalary;}
}
