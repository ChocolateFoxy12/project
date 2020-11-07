#include <iostream>

using namespace std;

int main ()
{
    int a,b,c,d;

    cout<<"the graph looks as follows: "<<endl;
    cout<<endl;

    cout<<"           a"<<endl;
    cout<<"      1---------2"<<endl;
    cout<<"      |         |"<<endl;
    cout<<"    d |         | b"<<endl;
    cout<<"      |         |"<<endl;
    cout<<"      3---------4"<<endl;
    cout<<"           c"<<endl;

    cout<<endl;

    cout<<"        (1,2,a)"<<endl;
    cout<<"        (2,4,b)"<<endl;
    cout<<"        (4,3,c)"<<endl;
    cout<<"        (3,1,d)"<<endl;

    cout<<endl;
    cout<<endl;

    cout<<"please introduce the weights of the edges: "<<endl;
    cout<<"1,2,"; cin>>a;
    cout<<"2,4,"; cin>>b;
    cout<<"4,3,"; cin>>c;
    cout<<"3,1,"; cin>>d;



    return 0;
}

