/*****************************************
* Assignment 4
* Name: «¸³Ç³Í
* Student Number: 104602019
* Course: 2017-CE1001
******************************************/

#include <iostream>
#include <string.h>
#include<stdio.h>
using namespace std;
int main()
{
  string string_eng,rever_eng;
  int dot[100];
  int  i=0,asci_ch=0,a=0,stredge=0,j=0,k=0,coun_t=1;
  int re_i=0, coun_a=0, coun_e=0, coun_i=0, coun_o=0, coun_u=0;
  const char *d="_.";
  char *p;
  cout<<"Please enter something without space:";
  cin>>string_eng;

  char char_eng[string_eng.length()];


  cout<<"case1:"<<endl;
  for(i=0;i<string_eng.length();i++)
  {



    if(i==0)re_i=string_eng.length()-1;
    rever_eng[i]=string_eng[re_i];
    re_i=re_i-1;
      //cout<<" "<<re_i<<" ";

      asci_ch=int(string_eng[i]);
 //the first test(big character to small character
     if(asci_ch==95)
        cout<<" ";
     else if(asci_ch<=90&&asci_ch>=65)
     {
        asci_ch=(string_eng[i]+32);
         cout<<(char)(asci_ch);
     }
    else if(asci_ch<=122&&asci_ch>=97)
     {
        asci_ch=(string_eng[i]-32);
         cout<<(char)(asci_ch);
     }
    else if(asci_ch<64)
            {cout<<""<<string_eng[i];}
    else if( asci_ch>90 ||asci_ch<97 )
        {cout<<""<<string_eng[i];}
    else if(asci_ch>122)
        {cout<<""<<string_eng[i];}
//change to the reverse
  }
cout<<endl;
cout<<"case2:"<<endl;

  for(i=0;i<string_eng.length();i++)
  {
     char_eng[i]=string_eng[i];

  }
/*
p=strtok(char_eng,d);
while(p)
{
    printf("%s",p);
    p=strtok(NULL,d);
}

for(i=0;i<string_eng.length();i++)
{
    cout<<rever_eng[i];
}
cout<<endl;
*/
for(i=0;i<string_eng.length();i++)
{

    if(int(rever_eng[i])==95 ||int(rever_eng[i])==46   )
    {
        a=coun_t;
        if(int(rever_eng[i])==95)
         {cout<<" ";}
        if(int(rever_eng[i])==46)
         {cout<<rever_eng[i];}

        for(j=a;j<string_eng.length();j++)
        {
            coun_t=coun_t+1;
            if(int(rever_eng[j])==95 ||int(rever_eng[j])==46)
            {
            stredge=j;
             for(k=stredge;k>i+1;k--)
                {
              cout<<""<<rever_eng[k-1];
                }

            break;}
        else if(j==string_eng.length()-1)
        {
          for(k=string_eng.length();k>i+1;k--)
          {
           cout<<""<<rever_eng[k-1];
          }
            break;}
       }
    }


}
cout<<endl;
cout<<"case3:"<<endl;
for(i=0;i<string_eng.length();i++)
{
   asci_ch=int(string_eng[i]);
   if(asci_ch==65 ||asci_ch==97)  coun_a=coun_a+1;
   else if(asci_ch==69 ||asci_ch==101) coun_e=coun_e+1;
   else if(asci_ch==73 ||asci_ch==105) coun_i=coun_i+1;
   else if(asci_ch==79 ||asci_ch==111) coun_o=coun_o+1;
   else if(asci_ch==85 ||asci_ch==117) coun_u=coun_u+1;


}
cout<<"a:"<<coun_a<<",e:"<<coun_e<<",i:"<<coun_i<<",o:"<<coun_o<<",u:"<<coun_u;
    return 0;
}
