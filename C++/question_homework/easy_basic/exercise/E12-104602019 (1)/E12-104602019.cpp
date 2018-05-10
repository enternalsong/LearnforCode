/*****************************************
* Exercise 11
* Name: «¸³Ç³Í
* Student Number: 104602019
* Course: 2017-CE1001
******************************************/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,sum_Odd=0,sum_Even=0,dif=0;
    cin>>n;
    string a;
    for(int i=0;i<n;i++)
    {
        cin>>a;

        for(int j=0;j<a.length();j++)
        {
            if(j%2==0)
                sum_Even=sum_Even+(int)a[j]-48;
            else if(j%2==1)
                sum_Odd=sum_Odd+(int)a[j]-48;
        }
        if(sum_Even-sum_Odd>=0)
        {
            dif=sum_Even-sum_Odd;
        }
        else if(sum_Odd-sum_Even>0)
        {
            dif=sum_Odd-sum_Even;
        }
        if(dif%11==0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
        /*for(int j=0;j<a.length();j++)
        {
            cout<<a[j];
            if(j==a.length()-1)cout<<endl;
        }
        */
        if(i==n-1)
        {
        cout<<endl;
        cout<<"--------------------------------";
        }
    }
}
