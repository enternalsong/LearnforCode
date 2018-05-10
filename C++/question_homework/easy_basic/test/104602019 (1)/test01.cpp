#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;
int main()
{
    int num=0,i=0;
    int a[100];
    while(cin>>num)
    {
        if(num==-1)
        {
            break;
        }
        i=0;
        while(num>0)
            {
                a[i]=num%2;
                num=num/2;
                i=i+1;
            }
        cout<<"the Binary number is:";
        for(int j=i-1;j>=0;j--)
        {

            cout<<a[j];
        }
        cout<<endl;


    }

    return 0;
}
