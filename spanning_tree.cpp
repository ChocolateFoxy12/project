#include <iostream>

using namespace std;

int main ()
{
        int a,b,c,d,e,f,g,h,i,j,k,l;

    cout<<"the graph looks as follows: "<<endl;
    cout<<endl;

    cout<<"   2-----5"<<endl;
    cout<<"  /  \\ /  \\ "<<endl;
    cout<<"  1---4---7"<<endl;
    cout<<"  \\  / \\  /"<<endl;
    cout<<"   3-----6"<<endl;

    cout<<endl;
    cout<<"please introduce the weights on each edge: "<<endl;
    cout<<"1,2,"; cin>>a;
    cout<<"1,4,"; cin>>b;
    cout<<"1,3,"; cin>>c;
    cout<<"2,5,"; cin>>f;
    cout<<"2,4,"; cin>>d;
    cout<<"3,4,"; cin>>e;
    cout<<"3,6,"; cin>>g;
    cout<<"4,5,"; cin>>h;
    cout<<"4,7,"; cin>>j;
    cout<<"4,6,"; cin>>i;
    cout<<"5,7,"; cin>>k;
    cout<<"6,7,"; cin>>l;

    return 0;
}
