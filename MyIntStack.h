// Specification file for the MyIntStack class
#ifndef MYINTSTACK_H
#define MYINTSTACK_H

template <class T>
class MyIntStack
{
private:
   T *stackArray;  // Pointer to the stack array
   int stackSize;    // The stack size
   T top;          // Indicates the top of the stack

public:
   // Constructor
    MyIntStack(int);
   // Copy constructor
   MyIntStack(const MyIntStack<T> &);

   // Destructor
   ~MyIntStack();
   
   // Stack operations
   void push(T);
   T pop();
   bool isFull() const;
   bool isEmpty() const;
    int size() const;
}; 
#endif 
