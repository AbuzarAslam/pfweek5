#include<iostream>
#include<cmath>
using namespace std;
float Positive(float a,float b,float c);
float Negative(float a,float b,float c);
main()
{
	float a;
	float b;
	float c;
	float result1;
	float result2;
	cout <<"Enter value of a....";
	cin >> a;
	cout <<"Enter value of b....";
	cin >> b;
	cout <<"Enter value of c....";
	cin >> c;

	result1 = Positive(a,b,c);
	cout << "Result is ...." << result1 << endl; 
	result2 = Negative(a,b,c);
	cout << "Result is ...." << result2 << endl; 

}
float Positive(float a,float b,float c)
  {
  	float mul;
	mul = 4*a*c;
	float sq;
	sq = pow(b,2);
	float eq1;
	eq1 = sq-mul;
	float sqroot;
	sqroot = sqrt(eq1);
	float  eq2;
	eq2 = (-b)+sqroot;
	float quadratic1;
	quadratic1 = eq2 /2*a;
	return quadratic1;
  }
float Negative(float a,float b,float c)
  {
  	float mul;
	mul = 4*a*c;
	float sq;
	sq = pow(b,2);
	float eq1;
	eq1 = sq-mul;
	float sqroot;
	sqroot = sqrt(eq1);
	float eq3;
	eq3 = (-b)-sqroot;
	float quadratic2;
	quadratic2 = eq3 /2*a;
	return quadratic2;
  }












