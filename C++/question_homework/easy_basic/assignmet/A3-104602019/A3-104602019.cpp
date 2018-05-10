/*****************************************
* Assignment 3
* Name: «¸³Ç³Í
* Student Number: 104602019
* Course: 2017-CE1001
******************************************/

#include<iostream>
#include<stdio.h>

using namespace std;
int main(void)
{
 int Num=0,maxx,i,count1=0,count2=0;

 cout<<"Input N: ";
 //zero line
 cin>>Num;
 int save[Num+1];
 int save3or7[Num+1];
 save[Num]=0;
 save3or7[0]=0;
 maxx=Num+1;
 for(i=1;i<maxx;i++) //1-Num
 {
     if(Num%i==0)
     {

         save[count1]=i;
         count1++;
     }

 }

cout<<"f("<<Num<<")=";
for(i=0;i<count1;i++)
{
    printf("%d ",save[i]);
}
cout<<endl;
//one line
cout<<"factor count("<<Num<<"): "<<count1<<endl;
//two line the number of factor count

cout<<""<<save[0]<<"~"<<Num<<"the multiple of 3 or 7 from 1 t:";
for(i=1;i<maxx;i++) //1-Num
{

    if(i%3==0 || i%7==0)
    {
      save3or7[count2]=i;
      printf("%d ",i);
      count2=count2+1;
    }

}
if(save3or7[0]==0)
{
    cout<<"NOT EXIST"<<endl;
}
//three line
return 0;





}
