/*****************************************
* Assignment 2
* Name:«¸³Ç³Í
* Student Number: 104602019
* Course: 2017-CE1001
******************************************/


#include<iostream>

using namespace std;
int main()
{
    int num_str=1,num_end=99,num_guess;
    int ans;
    cout<<"please set the answer(1~99):";
    cin>>ans;
    while(ans<num_str || ans>num_end)
    {
    cout<<"please set the answer again (1~99): ";
    cin>>ans;
    }

    cout<<"Guess number";
    cin>>num_guess;

    while(num_guess<num_str || num_guess>num_end)
    {
        cout<<"please set the answer again (1~99): ";
        cin>>num_guess;
    }

    while(num_guess>=num_str && num_guess<=num_end)
    {
      if(num_guess==ans)
      {cout<<"correct!!!";
      break;
      }

      else if(ans>num_guess)
        {
            cout<<""<<num_guess<<"~"<<num_end<<endl;
            num_str=num_guess;
            cout<<"Guess a number:";
            cin>>num_guess;
            while(num_guess<num_str || num_guess>num_end)
            {
                cout<<"please set the answer again (1~99): ";
                cin>>num_guess;
            }
        }
      else if(ans<num_guess)
        {
            cout<<""<<num_str<<"~"<<num_guess<<endl;
            num_end=num_guess;
            cout<<"Guess a number:";
            cin>>num_guess;
            while(num_guess<num_str || num_guess>num_end)
            {
                cout<<"please set the answer again (1~99): ";
                cin>>num_guess;
            }
        }




    }


/*
1-99
50

30

30-99

101

30-99

70

30-70
-2

30-70

50


50

*/








}
