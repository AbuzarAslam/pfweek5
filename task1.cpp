#include<iostream>
#include<cmath>
using namespace std;
main()
{
float base;
float angle;
float height;
cout << "Enter base....";
cin >> base;
cout << "Enter angle....";
cin >> angle;
height = tan(angle/57.2958)*base;
cout << "Height is...." << height << endl;
}