#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Walker.h"
using namespace std;

int main()
{
    Walker w('O');
    int goal = w.where_to_go();
    char input;
    while(w.get_position()!=goal){
        system("cls");
        cout<<'|';
        for(int i = w.get_position()-w.vision();i<w.get_position()+w.vision()+1;i++)
            cout<<((i==w.get_position())?w.get_ID():(i==goal?'*':'_'));
        cout<<"|\n\nCommand:";
        cin>>input;
        switch(input){
            case 'r':
                w.ask_walk(true);
                break;
            case 'l':
                w.ask_walk(false);
                break;
            case 'q':
                cout<<"Walker: OK, I Quit."<<endl;
                return 0;
            case 'c':
                cout<<"New ID:";
                cin>>input;
                w.set_ID(input);
                break;
        }
    }
    cout<<"\nWalker: Finally. Done by "<<w.get_step()<<" steps."<<endl;

    return 0;
}
