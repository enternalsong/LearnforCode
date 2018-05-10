#include <iostream>
#include<cstdlib>
#include <string>
using namespace std;
template<typename T>
class MyArray{
private:
      int num;
      T* aa;
public:
    MyArray(int a,T* arr);
    T get(int);
    void set(int,T);
    void Sort();
    void PrintArray( );
};
template<typename T>
 MyArray<T>::MyArray(int a,T* s)
{
    num=a;
    aa=new T[num];
    aa=s;
}
template<typename T>
void  MyArray<T>::set (int index,T ans)
{
    aa[index]=ans;

}


template<typename T>
T MyArray<T>::get(int i)
{
    return aa[i];
}
template<typename T>
void MyArray<T>::PrintArray()
{
    for(int i=0;i<num;i++)
    {
        cout<<aa[i]<<" ";
        if(i==num-1)
        {
            cout<<endl;
        }
    }
}
template<typename T>
void MyArray<T>::Sort()
{
    int maxx=0;

    for(int i=0;i<num-1;i++)
       {
           maxx=i;
        for(int j=i+1;j<num;j++)
        {
            if(aa[maxx]>aa[j])
            {
               maxx=j;


            }

                    }
                    swap(aa[maxx],aa[i]);
       }
}

int main() {
    int A1[5]={12,33,5,4,22};
    MyArray<int>Arr1(5,A1);
    Arr1.PrintArray();
    cout<<"Get array index of 2 : "<<Arr1.get(2)<<endl;
    cout<<"Set array index of 2 to 50: "<<endl;
    Arr1.set(2,50);
    Arr1.PrintArray();
    cout<<"Sort Array:"<<endl;
    Arr1.Sort();
    Arr1.PrintArray();

    cout << endl;
    double A2[5]={12.43, 12.33, 2.4 ,4.66 ,22.1};
    MyArray<double>Arr2(5,A2);
    Arr2.PrintArray();
    cout<<"Get array index of 2 : "<<Arr2.get(2)<<endl;
    cout<<"Set array index of 2 to 24.22: "<<endl;
    Arr2.set(2,24.22);
    Arr2.PrintArray();
    cout<<"Sort Array:"<<endl;
    Arr2.Sort();
    Arr2.PrintArray();
    return 0;
}
