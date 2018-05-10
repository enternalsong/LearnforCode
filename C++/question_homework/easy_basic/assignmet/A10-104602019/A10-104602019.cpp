#include<iostream>
using namespace std;
int sorted(int *,int);
int main()
{
    int a[100];
    int n=0,i=0;
    while(cin>>n)
    {
        if(n==-1)
        {
            break;
        }
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<sorted(a,n)<<" swaps"<<endl;
      /*  for(int i=0;i<n;i++)
        {
            cout<<a[i];
        }
        */
        //array display;
    }
    return 0;
}
int sorted(int bub[],int ts )
{
    int swp=0,ch=0,j=0;
    for( int i=0;i<ts;i++)
    {
        for( j=0;j<ts-i;j++)
        {
            if(bub[j]>bub[j+1])
            {
                ch=bub[j+1];
                bub[j+1]=bub[j];
                bub[j]=ch;
                swp=swp+1;
            }
        }
    }
    return(swp);
}
