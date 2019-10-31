
#include<cmath>
#include <math.h>
#include<bits/stdc++.h> 
using namespace std; 
#define error 0.00001
#define pi 3.14

 
double func(double x) 
{ 
	return sin(pi *x) -x -1; 
} 


void regulaFalsi(double a, double b) 
{ 
	if (func(a) * func(b) >= 0) 
	{ 
		cout << "You have not assumed right a and b\n"; 
		return; 
	} 

	double c = a; // Initialize result 
	int i=0;
	while(func(c)<=error) 
	
	{ 
		
		c = (a*func(b) - b*func(a))/ (func(b) - func(a)); 

		if (func(c)==0) 
			break; 
		
		else if (func(c)*func(a) < 0) 
			b = c; 
		else
			a = c; 
	i++;		
		}
		
		
	
	cout <<"Number of iterations:"<<i<<'\n'<< "The value of the root is : " << c; 
} 

 
int main() 
{ 
	
	double a =-1.5, b = -0.5; 
	regulaFalsi(a, b); 
	return 0; 
} 
