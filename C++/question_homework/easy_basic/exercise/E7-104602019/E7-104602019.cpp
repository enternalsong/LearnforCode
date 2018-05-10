/*****************************************
* Exercise 7
* Name: «¸³Ç³Í
* Student Number: 104602019
* Course: 2017-CE1001
******************************************/
#include<iostream>
using namespace std;
int main()
{
    int i=0,mid=0,sum=0;
    int reall=0;
    string s;
    while(cout<<"enter some words:",cin>>s)
    {

        if(s.length()==2 && s[1]=='1'&&s[0]=='-')
        {break;}
        if(s.length()==1)reall=1;
        if(s.length()%2==1)
        {
            mid=( s.length()-1 )/2;

            for(i=1;i<=mid;i++)
            {   if(s[mid-i]==s[mid+i])
                {
                    reall=1;
                }
                else if(s[mid-i]!=s[mid+i])
                {
                    reall=0;
                    break;
                }

            }
        }
        else
        {
            mid=( s.length()/2 );
            for(i=0;i<mid;i++)
            {
                if(s.length()==2)
                {


                    if( i==0)
                        {
                        if( s[mid]==s[mid-1])
                           {
                               reall=1;
                           }
                        else if( s[mid]!=s[mid-1])
                           {
                               reall=0;
                               break;
                           }
                        }
                }
                else if(s.length()!=2)
                {
                    if(i==0)
                    {
                        if(s[mid-1]==s[mid])
                        {
                            reall=1;
                        }
                        else if(s[mid-1]!=s[mid])
                        {
                            reall=0;
                            break;
                        }
                    }
                    else
                    {
                        if(s[mid-1-i]==s[mid+i])
                        {
                            reall=1;
                        }
                        else if(s[mid-i-1]!=s[mid+i])
                        {
                            reall=0;
                            break;
                        }

                    }


                }
            }
        }

     if(reall==1)
        {
            sum=0;
        cout<<"Yes, is a Palindromes"<<endl;
        for(i=0;i<s.length();i++)
            {
            if( (int)s[i]>=48 && (int)s[i]<=57 )
                {
                sum=( (int)s[i]-48 )+sum;
                }
            }
        cout<<"sum of number is :"<<sum<<endl;
        }
    else if(reall==0)
        {
        cout<<"No, is not a Palindromes"<<endl;
        }
    }
    //cout<<reall<<endl;
    return 0;

}
