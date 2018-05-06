#include<iostream>
using namespace std;
int sorted(int* ,int );
int midpoint(int*,int);
int main()
{
   int num_dat=0,ts=0;
   cin>>num_dat;
   int line[100],ans[20];
for(int j=0;j<num_dat;j++)
  {
    cin>>ts;
  for(int i=0;i<=100;i++)
   {
        if(i==ts)
        {
            break;
        }
        cin>>line[i];

   }
   sorted(line ,ts);
  /* for(int i=0;i<ts;i++)
   {
       cout<<line[i]<<" "<<endl;
   } */    //display the array;
   ans[j]=midpoint(line,ts);
  }
  for(int j=0;j<num_dat;j++)
  {
      cout<<ans[j]<<endl;
  }





    return 0;
}
int sorted(int a[],int n)
{
    int aa=0;
    int swp=0;
    for(int i=0;i<n;i++) //bubble sorted
        {
            for( aa=0;aa<n-i;aa++)
            {
             if(a[aa]>a[aa+1])
                {
                 swp=a[aa];
                 a[aa]=a[aa+1];
                 a[aa+1]=swp;
                }
            }
        }
}
int midpoint(int a[],int n)
{
    int midpo=0,sum=0;
    if(n%2==0)
    {
     midpo=(a[n/2]+a[n/2-1])/2;
    }
    if(n%2==1)
    {
        midpo=a[(n-1)/2];

    }

    for(int i=0;i<n;i++)
    {
        if(midpo-a[i]<0)
        {
            sum=sum+a[i]-midpo;
        }
        else
            sum=sum+midpo-a[i];

    }
    return sum;


}
