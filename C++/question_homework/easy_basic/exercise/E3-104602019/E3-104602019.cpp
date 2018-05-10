/*****************************************
* Exercise 3
* Name: «¸³Ç³Í
* Student Number: 104602019
* Course: 2017-CE1001
******************************************/



#include<iostream>
using namespace std;
int main(void)
{
int num=0,count1=0;
cout<<"please enter the even number:"<<endl;
cin>>num;

while(num%2!=0)
{
    cout<<"error!please enter the even number:"<<endl;
    cin>>num;
}
while(num%2==0)
{
    count1=count1+1;
    num=num/2;

}
cout<<"the odd number is:"<<num<<endl;
cout<<"total times is :"<<count1<<endl;

return 0;
}
