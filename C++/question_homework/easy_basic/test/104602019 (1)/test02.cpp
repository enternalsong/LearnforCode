#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
    int num_i=0,num_j=0;
    int cyc=0,maxx=0,n=0,ch=0;

    while(cin>>num_i>>num_j)
        {
            if(num_i>num_j)
            {
                ch=num_i;
                num_i=num_j;
                num_j=ch;
            }
            for(int k=num_i;k<=num_j;k++)
            {
                n=k;
                cyc=0;
                while(n!=1)
                {
                    if(n%2==0)
                    {
                        cyc=cyc+1;
                        n=n/2;

                    }
                    else if(n%2==1)
                    {
                        cyc=cyc+1;
                        n=3*n+1;
                    }
                }
                //cout<<cyc;
                cyc=cyc+1;
              if(maxx<cyc)
                {
                maxx=cyc;
                }
            }
        cout<<num_i<<" "<<num_j<<" "<<maxx<<endl;
        maxx=0;
        }

    return 0;
}
