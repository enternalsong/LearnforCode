#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    unsigned int a,b,ta,tb;
    int tia=1,tib=1,car=0;
    int aa[100],bb[100];
    while(cin>>a>>b)
    {
        ta=a;
        tb=b;
    }
     while(a/10!=0)
        {
            a=a/10;
            tia=tia+1;
            b=b/10;
            tib=tib+1;
        }

        for(int i=0;i<tia;i++)
        {
            aa[i]=ta%10;
            bb[i]=tb%10;
            ta=ta/10;
            tb=tb/10;
        }
        for(int i=0;i<tia;i++)
        {
            if(aa[i]+bb[i]>=10)
            {
                car=car+1;
            }
        }
        cout<<car<<endl;
        car=0;
    }
}
