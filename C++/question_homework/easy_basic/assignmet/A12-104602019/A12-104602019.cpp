#include<iostream>
#include<fstream>
#include<string.h>
#define maxx 200
using namespace std;
int main()
{
    char s[]="Input file name:";
    string ss;
    cout<<s;
    char save_s[maxx];
    string doow;
    string aa="";
    string neww;
    string dd;
    string lineString;
    int cho=0,isa=0,i=0;
    while(cin>>ss)
    {
        ifstream inf(ss.c_str(),ios::in);
        if( inf.is_open() )
            {
            cout<<"1. Replace"<<endl;
            cout<<"2. Delete"<<endl;
            cout<<"Choice: ";
            cin>>cho;
            if(cho==1)
                {
                cout<<"The word you like to replace:";
                cin>>doow;
                cout<<"The new word you like to replace "<<doow<<":";
                cin>>neww;


                        while(inf.getline(save_s,sizeof(save_s) )  )
                        {
                        //cout<<save_s<<endl;
                            size_t a=0;

                            aa=aa+"\n";
                            lineString=save_s;
                            while(a!=string::npos)
                            {



                                if(lineString.find(doow.c_str(),a,doow.size())!=string::npos)
                                {
                                    a=lineString.find(doow.c_str(),a,doow.size())+1;
                                    isa=isa+1;
                                    lineString=lineString.replace(a-1,3,neww);

                                }
                                else
                                {
                                    aa=aa+lineString;
                                    break;

                                    //aa=save_s;
                                }
                            }
                        }
                //cout<<aa<<endl;
                inf.close();
                //cout<<isa;
                ofstream putt(ss.c_str(),ios::out);
                    putt<<aa;

                //putt<<aa;
                }
            else if(cho==2)
                {
                 cout<<"The word you like to delete:";
                 cin>>doow;

                        while(inf.getline(save_s,sizeof(save_s) )  )
                        {
                        //cout<<save_s<<endl;
                            size_t a=0;

                            aa=aa+"\n";
                            lineString=save_s;
                            while(a!=string::npos)
                            {



                                if(lineString.find(doow.c_str(),a,doow.size())!=string::npos)
                                {
                                    a=lineString.find(doow.c_str(),a,doow.size())+1;
                                    isa=isa+1;
                                    lineString=lineString.replace(a-1,3,"");

                                }
                                else
                                {
                                    aa=aa+lineString;
                                    break;

                                    //aa=save_s;
                                }
                            }
                        }
                inf.close();

                ofstream putt(ss.c_str(),ios::out);
                    putt<<aa;


                }
            }
        else
        {
          cout<<s;
        }
    }
return 0;
}
