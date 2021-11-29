/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Reese Stowell
 */
#include <iostream>
#include "std_lib_facilities.h"

int main()
{
	double a = 0;
	double b = 0;
	double c = 0;
	cout << "Please enter a, b and c for the quadratic equation enter the number seperated by spaces ";
	
	while(cin >> a >> b >> c) {			
		double result = 0;
		double result2 = 0;
		double result3 = 0;

		result3 = pow(b,2)-4*a*c;	
		
		
		if(result3 > 0){
			result = (-b + sqrt(pow(b, 2) -4*a*c))/ 2*a;
			result2 = (-b - sqrt(pow(b, 2) -4*a*c))/ 2*a;
			cout << "The real roots are " << result << " and " << result2 << '\n';
			cout << "Please enter a new opperation ";
		}
		else if(result3 == 0){
			result = (-b + sqrt(pow(b, 2) -4*a*c))/ 2*a;
			result2 = (-b - sqrt(pow(b, 2) -4*a*c))/ 2*a;
			cout << "The two identical roots are both " << result <<'\n';
			cout << "Please enter a new opperation ";
		}
		else if(result3 < 0)
		{
			cout << "There are no real roots "<< '\n';
			cout << "Please enter a new opperation ";
		}
	}
}
