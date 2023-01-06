 #include<iostream>
using namespace std;
main()
{
	int number;
	cout << "Enter 3 digit number....";
	cin >> number;
	int reminder;
	int reverse;
	while(number>0)
	{
	reminder = number%10;
	reverse = (reverse*10)+reminder;
	number = number/10;
	}
    if(number=reverse)
     {
     cout << "Number is symmetrical" << endl;
     }
    if(number!=reverse)
     {
     cout << "Number is not symmetrical" << endl;
     }

}