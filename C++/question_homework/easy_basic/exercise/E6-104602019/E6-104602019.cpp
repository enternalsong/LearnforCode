/*****************************************
* Exercise 6
* Name:«¸³Ç³Í
* Student Number: 104602019
* Course: 2017-CE1001
******************************************/
#include<iostream>
#include<math.h>
using namespace std;
void ArmstrongNumber(int ) ;
int power(int  ,int );
int main()
{
    int N;
    while(cin >> N){
        ArmstrongNumber(N);
    }
    return 0;
}

void ArmstrongNumber(int k)
{
    int count1=1,num=0,num1=0,sum=0;
    string s;
    double save[100];
    int n=k,mod=0;
    while( n/10>0 )
    {
        n=n/10;
        count1=count1+1;
        //cout<<n<<endl;



       // cout<<count1<<endl;

    }

    //cout<<count1<<endl;
    for(n=0;n<count1;n++)
    {
        num=k;
        if(n==0)
        {save[n]=num%10;}
        else if(n==1)
          {
          num1=k;
          num1=num1/10;

          save[n]=num1%10;
          save[n]=double(save[n]);
          }

        else if(n==2)
         {num1=k;
          num1=num1/10;
          num1=num1/10;
          save[n]=num1%10;
          save[n]=double(save[n]);
          }
        else if(n==3)
         {num1=k;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          save[n]=num1%10;
          save[n]=double(save[n]);
          }
        else if(n==4)
         {num1=k;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          save[n]=num1%10;
          save[n]=double(save[n]);
         }
        else if(n==5)
         {num1=k;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          save[n]=num1%10;
          save[n]=double(save[n]);
          }
        else if(n==6)
         {num1=k;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          save[n]=num1%10;
          save[n]=double(save[n]);
          }
          else if(n==7)
          {num1=k;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          save[n]=num1%10;
          save[n]=double(save[n]);
          }
          else if(n==8)
          {num1=k;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          save[n]=num1%10;
          save[n]=double(save[n]);
          }
          else if(n==9)
          {num1=k;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          save[n]=num1%10;
          save[n]=double(save[n]);
          }
          else if(n==9)
          {num1=k;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          num1=num1/10;
          save[n]=num1%10;
          save[n]=double(save[n]);
          }

    }
   /* cout<<save[0];
    cout<<save[1];
    cout<<save[2];
*/

    for(n=0;n<count1;n++)
    {
        sum=sum+power(save[n],count1);
    }
    if(k==sum)
    {
        cout<<"yes"<<endl;

    }
    else if(k!=sum)
    {
        cout<<"no"<<endl;

    }



}
int power(int a,int b)
{
    int i;
    int multi=1;
   for(i=0;i<b;i++)
   {
       multi=multi*a;

   }

   return(multi);
}
