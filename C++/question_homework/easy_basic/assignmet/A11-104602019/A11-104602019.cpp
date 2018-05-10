/*****************************************
* Assignment 11
* Name: «¸³Ç³Í
* Student Number: 104602019
* Course: 2017-CE1001
******************************************/

#include<iostream>
#include <stdio.h>
#include<string.h>
#define maxx 102
using namespace std;
int Add(int *,int *,int *,int );
int Same(int *,int *,int *,int);
int Substract(int *,int *,int *,int);
int main()
{
    char a[maxx],b[maxx];
    int aa[maxx],bb[maxx],cc[maxx];
    aa[maxx]=0;
    bb[maxx]=0;
    cc[maxx]=0;
    char oper[1];
    int k=0,ci=0,tt=0;
    while(cin>>a>>oper>>b)
    {
        for(int i=0;i<maxx;i++)
        {
        aa[i]=0;
        bb[i]=0;
        cc[i]=0;
        }//set all to zero;


        k=strlen(a)-1;
        for(int i=0;i<maxx;i++)
        {
            aa[i]=(int)a[k]-48;
            if(i>strlen(a)-1)
            {
                aa[i]=0;
            }
            k=k-1;
        }
        k=strlen(b)-1;

        for(int i=0;i<maxx;i++)
        {
            bb[i]=(int)b[k]-48;
            if(i>strlen(b)-1)
            {
                bb[i]=0;
            }
            k=k-1;
        }
        k=0;
       /* for(int i=0;i<maxx-1;i++)
        {
            cout<<bb[i];
        }
        */
        if(strlen(a)>strlen(b))ci=strlen(a);
        else
            ci=strlen(b);
        if(oper[0]=='+')
       {
        ci=ci+Add(aa,bb,cc,ci);
        for(int i=ci-1;i>=0;i--)
            {
                cout<<cc[i];
            }
       }
        else if(oper[0]=='-')
        {
            if(Same(aa,bb,cc,ci)==1)
            {
                cout<<0;
            }
         else
            {
            ci=ci+Substract(aa,bb,cc,ci);
            for(int i=ci-1;i>=0;i--)
                {
                    if( cc[i]!=0)
                    {
                        ci=i;
                        break;
                    }
                }
            for(int i=ci;i>=0;i--)
                {
                cout<<cc[i];
                }

            }
        }
        for(int i=0;i<maxx;i++)
        {
        aa[i]=0;
        bb[i]=0;
        cc[i]=0;
        }//set all to zero;
    cout<<"\n\n";
    }
    return 0;
}

int Add(int  a[], int  b[], int  c[],int ti)
{

    for(int i=0; i<ti; i++)
    {
    c[i]=a[i]+b[i]+c[i];
        if(i==ti-1 && c[i]>=10)
    {
        c[i+1]=1;
        c[i]=c[i]%10;
          return 1;
    }
    else if(c[i]>=10)
        {
        c[i+1]=1;
        c[i]=c[i]%10;
        }

    }
    return 0;
 }
int Substract(int a[],int b[],int c[],int ti)
{
    for(int i=0;i<ti;i++)
    {
        if(a[i]-b[i]+c[i]==0 && i==ti-1  )
        {

           return -1;
        }

        else if(a[i]-b[i]+c[i]<0)
        {
           c[i]=10+a[i]-b[i]+c[i];
           c[i+1]=-1 ;
        }
            else
        {
            c[i]=a[i]-b[i];
        }
    }
    return 0;
}
int Same(int a[],int b[],int c[],int ti)
{
    for(int i=0;i<ti;i++)
    {
        if(a[i]!=b[i])
        {
          return 0;
          break;
        }
    }
    return 1;

}

