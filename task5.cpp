 #include<iostream>
using namespace std;
main()
{
int hour;
int minutes;
cout << "Enter hours....";
cin >> hour;
cout << "Enter minutes...";
cin >> minutes;
        if(hour<24 && minutes<60)
	{
	minutes = minutes + 15;
	}
        if(minutes>59)
	{
	hour = hour +1;
	minutes = minutes-60;
	} 
        if(hour>23)
	{
	hour = 0;
	}
        cout << "Time after 15 minutes is...."<< hour << ":" <<minutes << endl;
}