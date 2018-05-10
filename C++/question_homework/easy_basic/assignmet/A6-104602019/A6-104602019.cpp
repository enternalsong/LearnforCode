/*****************************************
* Assignment 6
* Name: «¸³Ç³Í
* Student Number: 104602019
* Course: 2017-CE1001
******************************************/


#include<iostream>
using namespace std;
int PascalRule(int a,int b);
int main()
{
    int n, k;
    while(cin  >> n >> k){
    cout << PascalRule(n, k) << endl;
    }
    return 0;
}

int PascalRule(int a,int b)
{
    if(b==0)
    {
     return 1;
    }
    if(a==b)
    {
        return 1;
    }
    else
    {
    return(PascalRule(a-1,b)+PascalRule(a-1,b-1));
    }

}

