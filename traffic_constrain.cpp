#include<bits/stdc++.h>
using namespace std;

//without traffic
 void costA()
 {
     int cost=10;

    int time,calculate;
    cout<<"Enter the time for the charge"<<endl;
    cin>>time;
    calculate=cost*time;
    cout<<calculate<<endl;

 }
 void costB()
 {
      int cost=20;
    int time,calculate;
    cout<<"Enter the time for the charge"<<endl;
    cin>>time;
    calculate=cost*time;
    cout<<calculate<<endl;


 }
 void Fast_Charging()
 {
      int cost=40;

    int time,calculate;
    cout<<"Enter the time for the charge"<<endl;
    cin>>time;
    calculate=cost *time;
    cout<<calculate<<endl;




 }

 void Without_traffic()
 {
     cout<<"Enter the Type of the Charging cable "<<endl;
     cout<<" 1: Type:A "<<" "<<" 2: Type:B"<<" "<<"3: Fast Charging"<<endl;
     int select;
     cin>>select;
     switch(select)
     {
     case 1:
         costA();
        break;
     case 2:
         costB();
        break;
     case 3:
         Fast_Charging();
        break;
     default:
         cout<<"Error";
        break;

     }

 }

 /*void  With_traffic()
 {

 }*/

int main()
{
    int x;
    cout<<"Choose the path to travel"<<endl;
    cin>>x;
    switch(x)
  {
    case 1:
        cout<<" Charging cost without the traffic\n"<<endl;
        Without_traffic();
        break;


   /* case 2:
        cout<<" Charging cost with the traffic"<<endl;
        With_traffic();
        break;*/


    default:
        cout<<" Error"<<endl;
        break;


   }

  return 0;
}
