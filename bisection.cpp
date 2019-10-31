// C++ program for implementation of Bisection Method for 
// solving equations 
#include<iostream>
#include<cmath>
#include <math.h>
#include<bits/stdc++.h> 
using namespace std; 
#define error 0.01
#define pi 3.14


double func(double x) 
{ 
	return sin(pi *x) -x -1; 
} 


void bisection(double a, double b) 
{ 
	if (func(a) * func(b) >= 0) 
	{ 
		cout << "You have not assumed right a and b\n"; 
		return; 
	} 

	double c = a; 
	int i=0;
	while ((b-a) >= error) 
	{ 
	
		
		c = (a+b)/2; 

	
		if (func(c) == 0.0) 
			break; 

		
		else if (func(c)*func(a) < 0) 
			b = c; 
		else
			a = c; 
	i++;		
	} 
	cout <<i<<'\n'<< "The value of root is : " << c; 
} 


int main() 
{ 
	
	double a =-2, b = 0; 
	bisection(a, b); 
	return 0; 
} 
