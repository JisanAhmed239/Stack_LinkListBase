#include "StackType.h"
#include <iostream>

using namespace std;

template <class ItemType>
StackType<ItemType>::StackType()
{
    topPtr = NULL;
    topPtr2 = NULL;

}

template <class ItemType>
void StackType<ItemType>::MakeEmpty()
{
 while (!IsEmpty())
 {
     Pop();
 }

}

template <class ItemType>
StackType<ItemType>::~StackType()
{
    MakeEmpty();
}

template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (topPtr2 == NULL);
}

template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    try
    {
        NodeType* newNode= new NodeType();
        delete newNode;
    }
    catch (std :: bad_alloc e){
         return true;

    }
    return false;



}

template <class ItemType>
void StackType<ItemType>::Push(ItemType item)
{
    if( IsFull() ) throw FullStack();
    else
    {
        NodeType* newNode= new NodeType();
        newNode->info= item;
        newNode->next= topPtr;


        topPtr= newNode;
        topPtr2= topPtr;

    }
}

template <class ItemType>
void StackType<ItemType>::Pop()
{
    if( IsEmpty() ) throw EmptyStack();
   else
   {
       NodeType* nodeToDelete= topPtr;
       topPtr = topPtr-> next;
       topPtr2= topPtr;

       nodeToDelete->next = NULL;
       delete nodeToDelete;

   }
}

template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    if (IsEmpty()) throw EmptyStack();
    else
    {
      return topPtr->info;
    }

}

template<class ItemType>
int StackType<ItemType>::SumOdd()
{
     int value,sum = 0;
    while(!IsEmpty())
    {
       value = Top();
       if(value%2!=0)
       {
       sum = sum + value;

       }
        Pop();

    }
    return sum;
}

template<class ItemType>
void StackType<ItemType>::print()
{
    while(topPtr2!=NULL)
    {
        cout<<topPtr2->info<<endl;
        topPtr2 = topPtr2->next;
    }
    topPtr2= topPtr;


}


