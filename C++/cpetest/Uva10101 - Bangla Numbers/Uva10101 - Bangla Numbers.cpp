#include<iostream>


using namespace std;
void modd(long long *,int);
int main()

{

    long long num=0,a1=0;
    int i=0,j=0;
    long long a[40];
    cin>>num;
    a1=num;
    a[i]=a1%10000000;
    while(a1>=10000000)
    {
        a1=a1/10000000;
        i=i+1;
        a[i]=a1%10000000;
    }
    for( j=i;j>=0;j--)
    {
       modd(a,j);
       if(j==0)
       {
           cout<<endl;
       }

    }
    return 0;
}
void modd(long long aa[],int t)
{
    //cout<<"aaaa";
    cout<<aa[t]/100000<<" "<<"lakh"<<" ";
    aa[t]=aa[t]%100000;
    cout<<aa[t]/1000<<" "<<"hajar"<<" ";
    aa[t]=aa[t]%1000;
    cout<<aa[t]/100<<" "<<"shata"<<" ";
    cout<<aa[t]%100<<"";
    if(t=1)cout<<"  lanta";
}
