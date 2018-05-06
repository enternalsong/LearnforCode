#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  long long warrior1, warrior2;
  while( scanf( "%lld%lld", &warrior1, &warrior2 ) != EOF )
    {
        if(warrior1<warrior2)
            cout<<warrior2-warrior1<<endl;
       else if(warrior1>warrior2)
            cout<<warrior1-warrior2<<endl;

    }
  return 0;
}
