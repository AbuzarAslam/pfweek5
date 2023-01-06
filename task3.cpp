 #include<iostream>
using namespace std;
main()
{
	int number;
	int original;
	int reminder;
	int reverse;
	
	cout << "Enter 3 digit number....";
	cin >> number;
	original = number;

	while(number>0)
	{
	reminder = number%10;
	reverse = (reverse*10)+reminder;
	number = number/10;
	}
    if(original==reverse)
     {
     cout << "Number is symmetrical" << endl;
     }
    if(original!=reverse)
     {
     cout << "Number is not symmetrical" << endl;
     }

}
