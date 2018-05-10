/*****************************************
* Exercise 9
* Name: «¸³Ç³Í
* Student Number: 104602019
* Course: 2017-CE1001
*****************************************/

#include<iostream>
using namespace std;

int main()
{
    int a[][3]={1,2,3,4,5,6,7,8,9};
    int b[][3]={1,2,3,4,5,6,7,8,9};
    int c[][3]={0,0,0,0,0,0,0,0,0};
    int d[][3]={0,0,0,0,0,0,0,0,0};
    char sig='+';



while(sig!='q')
{

    cout<<"[*]Input matrix operation:"<<endl;
    while(cin>>sig)
    {

        if(sig=='q')
            {   cout<<"[*]Program end."<<endl;
                break;}
        else if(sig=='+')
        {
          for(int j=0;j<3;j++)
            {
                for(int i=0;i<3;i++)
                {
                    c[j][i]=a[j][i]+b[j][i];
                    cout<<c[j][i]<<" ";


                }
                    cout<<endl;
            }
        }
        else if(sig=='-')
        {
          for(int j=0;j<3;j++)
            {
                for(int i=0;i<3;i++)
                {
                    c[j][i]=a[j][i]-b[j][i];
                    cout<<c[j][i]<<" ";


                }
                    cout<<endl;
            }
        }
        else if(sig=='*')
        {
          for(int j=0;j<3;j++)
            {
                for(int i=0;i<3;i++)
                {
                    c[j][i]=a[j][i]*b[j][i];
                    cout<<c[j][i]<<" ";


                }
                    cout<<endl;
            }
        }
        else if(sig=='/')
        {
          for(int j=0;j<3;j++)
            {
                for(int i=0;i<3;i++)
                {
                    c[j][i]=a[j][i]/b[j][i];
                    cout<<c[j][i]<<" ";


                }
                    cout<<endl;
            }
        }
        else if(sig=='d')
        {
            for(int i=0;i<3;i++)
            {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                  d[i][j]=d[i][j]+a[i][k]*b[k][j];
                }
                c[i][j]=d[i][j];
                cout<<c[i][j]<<" ";
            }
                cout<<endl;
            }
        }

        else
        {
            cout<<"[!]Value + - * / d for operation, q to leave."<<endl;

        }
            cout<<"[*]Input matrix operation:"<<endl;

    }
}
return 0;
}
