#include <iostream>
#include "StackType.cpp"
using namespace std;

int main()
{
    int num,pu;
    StackType<int>jisan;
    StackType<int>jisan1;
     bool found;
    found=jisan.IsEmpty();
    if(found == true)
    {
        cout<<"stack is empty"<<endl;

    }
    else
    {
        cout<<"stack is not empty"<<endl;
    }
    cout<<"Insert 4 item:\n";
    for(int i =0;i<4;i++)
    {
        cin>>num;
        jisan.Push(num);
        jisan1.Push(num);
    }

    cout<<"print the list\n"<<endl;
    jisan.print();
    cout<<"sum of all odd numbers: "<<endl;
    cout<<jisan1.SumOdd()<<endl;
    found=jisan.IsFull();
    if(found == true)
    {
        cout<<"stack is full\n";

    }
    else{cout<<"stack is not full\n";}
     found=jisan.IsEmpty();
    if(found==true)
    {
        cout<<"stack is empty"<<endl;

    }
    else
    {
        cout<<"stack is not empty"<<endl;
    }
    cout<<"push one item: ";
    cin>>pu;
    jisan.Push(pu);
    jisan.print();
     found=jisan.IsFull();
    if(found == true)
    {
        cout<<"stack is full\n";

    }
    else{
         cout<<"stack is full\n";
    }
    cout<<"pop two items:"<<endl;
    jisan.Pop();
    jisan.Pop();
    cout<<"print the list: "<<endl;
    jisan.print();
    cout<<"clear the stack"<<endl;
    jisan.MakeEmpty();
    found=jisan.IsEmpty();
    if(found==true)
    {
        cout<<"stack is empty"<<endl;

    }
    else
    {
        cout<<"stack is not empty"<<endl;
    }
    cout<<"print the stack:"<<endl;
    jisan.print();
    cout<<"push two item: \n";
    cin>>pu;
    jisan.Push(pu);
    cin>>pu;
    jisan.Push(pu);
    cout<<"print the stack: "<<endl;
    jisan.print();

}
