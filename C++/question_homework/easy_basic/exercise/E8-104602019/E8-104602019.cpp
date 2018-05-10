/*****************************************
* Exercise 8
* Name: ¬I°êµ`
* Student Number: 100123456
* Course: 2017-CE1001
*****************************************/

#include<iostream>

using namespace std;
int main()
{
    int row=0,col=0,i=0,j=0;


while(cin>>row>>col)
    {
        if(row<=1 || col>=100)
        {
            cin>>row>>col;
        }
    int m[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
          cin>>m[i][j];
        }
    }
    cout<<endl;
    for(j=0;j<col;j++)
    {
        for(i=0;i<row;i++)
        {
            cout<<m[i][j]<<" ";
            if(i==row-1)
            {cout<<endl;}

        }
    }
    cout<<endl;



    }









}
