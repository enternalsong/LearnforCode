/*****************************************
* Exercise 4
* Name: «¸³Ç³Í
* Student Number: 104602019
* Course: 2017-CE1001
******************************************/
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{

string num_n;
int i,b;
cout<<"Please input string of numbers:"<<endl;
cin>>num_n;

b=num_n.length();

for(i=0;i<b;i++)
{
    if(i%5==0)
    {
    cout<<endl;
    switch(num_n[i])
       {
       case '0':
            cout<<"zero  ";
            break;
       case '1':
            cout<<"one   ";
            break;
        case '2':
            cout<<"two   ";
            break;
        case '3':
            cout<<"three ";
            break;
        case '4':
            cout<<"four  ";
            break;
        case '5':
            cout<<"five  ";
            break;
        case '6':
            cout<<"six   ";
            break;
        case '7':
            cout<<"seven ";
            break;
        case '8':
            cout<<"eight ";
            break;
        case '9':
            cout<<"nine  ";
            break;
       }

    }
    //cout<<num_n[i]<<endl;
    else if(i%5==4&& i!=b-1)
    {
        switch(num_n[i])
        {
        case '0':
            cout<<"-zero  ";
            break;
        case '1':
            cout<<"-one  ";
            break;
        case '2':
            cout<<"-two  ";
            break;
        case '3':
            cout<<"-three";
            break;
        case '4':
            cout<<"-four ";
            break;
        case '5':
            cout<<"-five";
        break;
        case '6':
            cout<<"-six  ";
            break;
        case '7':
            cout<<"-seven";
            break;
        case '8':
            cout<<"-eight";
            break;
        case '9':
            cout<<"-nine ";
            break;
    }

    cout<<"-";
    }
    else
    switch(num_n[i])
    {
    case '0':
     cout<<"-zero  ";
     break;

    case '1':
      cout<<"-one  ";
      break;
    case '2':
      cout<<"-two  ";
      break;
    case '3':
      cout<<"-three";
      break;
    case '4':
      cout<<"-four ";
      break;
    case '5':
      cout<<"-five";
      break;
    case '6':
      cout<<"-six  ";
      break;
    case '7':
      cout<<"-seven";
      break;
    case '8':
      cout<<"-eight";
      break;
    case '9':
      cout<<"-nine ";
      break;
    }
}






return 0;
}
