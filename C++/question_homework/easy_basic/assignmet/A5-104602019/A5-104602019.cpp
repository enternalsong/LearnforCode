/*****************************************
* Assignment 5
* Name: «¸³Ç³Í
* Student Number: 104602019
* Course: 2017-CE1001
******************************************/

#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
    int len=0;
    int x=0;
    int i=0,j=0,str_time=0,space=0,k=0;
    cout<<"input the several case to show"<<endl;


    cout<<"***************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    while(cin>> x)
    {
         while(x<2 || x>10)
        {
            cout<<"Error,input the number again,you need to input number between 2 to 10"<<endl;
            cin>>x;
        }

        //upper triangle

        //space

        //star

        for(j=0;j<x;j++)
        {
        //space
           space=x-1;
           space=space-j;
           for(k=0;k<space;k++)
           {
               cout<<" ";
           }
        //star
            str_time=2*j+1;
            for(k=0;k<str_time;k++)
            {cout<<"*";



            }

            cout<<endl;

        //lower triangle
        }

        //lower triangle
        for(j=1;j<x;j++)
            {
            //sapce
            for(k=0;k<j;k++)
                {
                cout<<" ";
                }
            //star
            str_time=x-j-1;
            str_time=2*str_time+1;  //star=2*i+1 3  1 line  str_time=1 2*1=3
            for(k=0;k<str_time;k++)
                {
                    cout<<"*";
                }

            cout<<endl;
            }





        cout<<endl;





       //down triangle
    }






return 0;
system("pause");
}
