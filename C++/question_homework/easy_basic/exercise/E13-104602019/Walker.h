#ifndef WALKER_H
#define WALKER_H
#include<stdlib.h>
#include <time.h>

class Walker
{
    public:
    Walker(char a);
    ~Walker();
    void set_ID(char s)
    {
        ID=s;
    }

    char get_ID()
    {
        return ID;
    }

    void ask_walk(bool aa)
    {
        if(aa==true)
        {
            pp=pp+1;
        }
        else
        {
            pp=pp-1;
        }
    }
    int where_to_go()
    {
            srand(time(NULL));
            ss=rand()%101-50;
            return ss;
    }
    int get_position()
    {
        pp=0+pp;
     return pp;
    }
    int get_step()
    {
        
    }
    int vision()
    {
        aa=int(ID)-92;
        return(aa);
    }
    private:
        static int pp;
        int aa;
        int ss;
        char ID;

};

#endif // WALKER_H
