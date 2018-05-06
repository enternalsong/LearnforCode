#include<iostream>
using namespace std;
void fibno(int * ,int);
int main()
{
    int num=0,shi=0,j=1,k;
    cin>>num;
    int a[num];
    int mod[num];
    a[0]=1;
    a[1]=1;
    fibno(a,num);
    //set the fibno series
    /*for(int i=0;i<num;i++)
    {
        cout<<a[i]<<" ";
    }
    */
    for(int i=1;i<=num;i++)
    {
        shi=i;

        while(a[j]<=shi)
        {
            j=j+1;
        }
        for(k=j-1;k>0;k--)
        {
            if(shi>=a[k])
            {
                mod[k]=1;
                shi=shi-a[k];
            }
            else if(shi<a[k])
            {
                mod[k]=0;
            }
        }
        cout<<i<<" ";
        for(int k=j-1;k>0;k--)
        {
            cout<<mod[k];
            if(k==1)cout<<" (fib)"<<endl;
        }
       // cout<<endl;
    }
    return 0;
}
void fibno(int aa[],int n)
{
    for(int i=2;i<n;i++)
    {
        aa[i]=aa[i-1]+aa[i-2];
    }
}
