/*****************************************
* Exercise 10
* Name: «¸³Ç³Í
* Student Number: 104602019
* Course: 2017-CE1001
******************************************/



#include<iostream>

using namespace std;

int main()
{
    int n1=0,n2=0,swp=0,*temp,*temp2,*p1,*p2,swptr;
    char op;
    cout<<"Input 2 numbers:"<<endl;
    cin>>n1;
    cin>>n2;
    p1=&n1;
    p2=&n2;
    cout<<"n1 n2 Values:"<<endl;
    cout<<*p1<<" "<<*p2<<endl;
    cout<<"n1 n2 address:"<<endl;
    cout<<p1<<" "<<p2<<endl;
    cout<<endl;
    cout<<"Input operation:"<<endl;
    while(cin>>op)
    {
        if(op=='*')
        {

        swp = *p1;
        *p1 = *p2;
        *p2=swp;

        }
        else if(op=='&')
        {
        swp=*p1;
        *p1 = *p2;

        temp = p1;
        temp2=p2;
        p2 = temp;
        p1=temp2;
        *p2=swp;
        //*p2=swp;
        }

        else if(op=='e')
        {
            break;
        }
        cout<<"n1 n2 Values:"<<endl;
        cout<<*p1<<" "<<*p2<<endl;
        cout<<"n1 n2 address:"<<endl;
        cout<<p1<<" "<<p2<<endl;
        cout<<endl;
        cout<<"Input operation:"<<endl;

    }

    return 0;
}
