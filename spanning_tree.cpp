#include <iostream>

#define V 7

using namespace std;

/*void prim(int graph[V][V])
{
    //lol
}*/

int main ()
{
    int graph[V][V]={{0,3,8,0,0,0,0},
                     {3,0,0,4,1,0,0},
                     {8,0,0,6,0,2,0},
                     {0,4,6,0,2,5,0},
                     {0,1,0,2,0,0,1},
                     {0,0,2,5,0,0,6},
                     {0,0,0,0,1,6,0}};


    cout<<"the graph looks as follows: "<<endl;
    cout<<endl;

        cout<<"               1"<<endl;
    cout<<"          (1)-----(4)"<<endl;
    cout<<"        3/  4\\  2/  1\\"<<endl;
    cout<<"      (0)     (3)     (6)"<<endl;
    cout<<"        8\\  6/  5\\  6/"<<endl;
    cout<<"          (2)-----(5)"<<endl;
    cout<<"               2"<<endl;

    cout<<endl;
    cout<<endl;





    return 0;
}

