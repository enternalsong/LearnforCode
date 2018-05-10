/*****************************************
* Exercise 2
* Name: «¸³Ç³Í
* Student Number: 104602019
* Course: 2017-CE1001
******************************************/

#include<iostream>
using namespace std;


int main(void)
{
    char opr;
    int num1,num2,ans;

    cout<<"Enter two number :";
    cin>>num1>>num2;
    cout<<"Enter one Operator(+,-,*,/) :";
    cin>>opr;
    if(opr=='+')
    {ans=num1+num2;
     cout<<"addition:"<<ans;
    }
    if(opr=='-')
    {ans=num1-num2;
    cout<<"minus:"<<ans;
    }
    if(opr=='*')
    {ans=num1*num2;
    cout<<"product:"<<ans;
    }
    if(opr=='/')
    {ans=num1/num2;
     cout<<"divide"<<ans;
    }



    return 0;

}
