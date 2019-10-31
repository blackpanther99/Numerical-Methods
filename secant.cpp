
#include <bits/stdc++.h> 
#define pi 3.14
#define error 0.01
using namespace std; 
 
float f(float x) 
{ 
	float f = sin(pi *x) -x -1; 
	return f; 
} 

void secant(float x1, float x2) 
{ 
	float i = 0, xm, x0, c; 
	if (f(x1) * f(x2) < 0) { 
		do { 
			
			x0 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1)); 

			
			c = f(x1) * f(x0); 
 
			x1 = x2; 
			x2 = x0; 

			i++; 

			if (c == 0) 
				break; 
			xm = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1)); 
		} while (abs(xm - x0) >= error);

		cout <<"Number of iterations:"<<n<<'\n'<< "The value of the root is : " << x0;  
	} else
		cout << "You have not assumed right a and b\n"; 
} 

 
int main() 
{ 
	 
	float x1 = -2, x2 = 0;
	secant(x1, x2); 
	return 0; 
} 

