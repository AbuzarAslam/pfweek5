#include<iostream>
using namespace std;
main()
 {
    float volume;
    int flow1;
    int flow2;
    float hour;
    float pipe1,pipe2;
    float total;
    float percentage;
    float perpipe1,perpipe2;
    float overflow;
     overflow = volume - total;
    cout << "Enter volume of pool....";
    cin >> volume;
    cout << "Enter flow rate of first pipe....";
    cin >> flow1;
    cout << "Enter flow rate of second pipe....";
    cin >> flow2;
    cout << "Enter hour the worker will remain absent....";
    cin >> hour;
    pipe1 = flow1*hour;
    pipe2 = flow2*hour;
    total = pipe1 + pipe2;
    percentage = (total/volume)*100;
        if(volume<total)
        {
            cout << "for" << hour << "hours the pool will overflow" << overflow << "liters" ;
        }
        if(volume>total)
        {
    cout << percentage << "% of pool has been filled ";
    perpipe1 = (pipe1/total)*100;
    cout << "pipe1:" << perpipe1 << "%";
    perpipe2 = (pipe2/total)*100;
    cout << "pipe2:" << perpipe2 << "%";
        }
    }
