 #include<iostream>
using namespace std;
main()
{
int num,rem;
int sum=0;
cout << "Enter a number...."; 
cin >> num;
    while(num>0)
    {
      rem = num%10;
      sum = sum+rem;
      num = num/10;
    }
   if(sum%2==0)
   {
     cout<<"This number is evenish: ";
   }
   if(sum%2!=0)
   {
     cout<<"This number is oddish ";
   }
       
    
}
