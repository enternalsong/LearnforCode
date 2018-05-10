#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

int main()
{
    string s;
    //cin>>s;
    int ts=0;
    int  sum,sum_s;
    int a[100];
while(cin>>s)
   {
       sum_s=0;
       sum=0;
       ts=0;
        for(int i=0;i<s.length();i++)
        {
            sum=(int)s[i]-48+sum;
        }
    //cout<<sum;
        sum_s=sum;
        while(sum>0)
        {

            sum=sum%10;
            sum=sum/10;
          ts=ts+1;
        }
        if(sum_s==999999999999999999999)
        {
            ts=3;
        }
        if(sum_s%9==0)
        {
            for(int i=0;i<s.length();i++)
            {
                cout<<s[i];
            }
            cout<<" is a multiple of 9 and has 9-degree "<<ts<<"."<<endl;
        }

    else
        {
            for(int i=0;i<s.length();i++)
                {
                cout<<s[i];
                }
                cout<<" is not a multiple of 9."<<endl;
        }
   }
    return 0;
}
