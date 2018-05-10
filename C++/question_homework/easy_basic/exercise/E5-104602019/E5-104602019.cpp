/*****************************************
* Exercise 5
* Name: «¸³Ç³Í
* Student Number: 100123456
* Course: 2017-CE1001
******************************************/
#include<iostream>

using namespace std;
int main()
{
    int x=0,i=0,j=0,k=0;
    while(cin>> x)
    {
        while(x<2 || x>10)
        {   cout<<"Please input the number again"<<endl;
            cin>>x;
        }


    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        if(i==j)
        {
            cout<<"x";
        }
        else if((i+j)==x+1)
        {
            cout<<"x";
        }
        else
        {
            cout<<" ";
        }
        cout<<endl;
    }





    }
    return 0;









}

