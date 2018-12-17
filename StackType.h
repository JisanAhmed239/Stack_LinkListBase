#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

#include <string>
class FullStack{
public:
 std::string ErrorMessage() { return "The stack is full"; }
};
class EmptyStack{
public:
 std::string ErrorMessage() { return "The stack is empty"; }
};

template <class ItemType>
class StackType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
public:
    StackType();
    ~StackType();
    bool IsFull();
    bool IsEmpty();
    void MakeEmpty();
    void Push(ItemType item);
    void Pop();
    ItemType Top();
    int SumOdd();
    void print();
private:
    NodeType* topPtr;
    NodeType* topPtr2;
};



#endif

