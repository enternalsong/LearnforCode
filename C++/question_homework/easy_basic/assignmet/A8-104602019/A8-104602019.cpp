/*****************************************
* Assignment 8
* Name: «¸³Ç³Í
* Student Number: 104602019
* Course: 2017-CE1001
******************************************/
#include<iostream>
using namespace std;
int main()
{
    int num=0,times=0;
    int i=0,j=0,k=0;

while(num!=-1)
{

    cout<<"input number:";
    while(cin>>num)
    {
        if(num==-1)break;
        int a[num];
        for(i=0;i<num;i++)
        {

            cin>>a[i];
        }
        cout<<endl;
        times=num;

        for(i=0;i<num;i++)
        {

            for(j=i;j<times;j++)
            {
                cout<<a[j]<<" ";
                if(j==times-1)
                {cout<<endl;
                }
            }
        k=i;
   //set times =nu
            for(j=times-1;j>=k+1;j--)
            {
            cout<<a[j]<<" ";
                if(j==k+1)
                {
                cout<<endl;
                }
            }
            times=times-1;
        }
        cout<<"input number:";
    }
}
return 0;
}


