// Implementation file for the MyIntStach class
#include <iostream>
#include "MyIntStack.h"
using namespace std;

//***********************************************
// Constructor                                  *
// This constructor creates an empty stack. The *
// size parameter is the size of the stack.     *
//***********************************************
template <class T>
MyIntStack<T>::MyIntStack(int size)
{
   stackArray = new int[size]; 
   stackSize = size; 
   top = -1;
}

//***********************************************
// Copy constructor                             *
//***********************************************
template <class T>
MyIntStack<T>::MyIntStack(const MyIntStack<T> &obj)
{
   // Create the stack array.
   if (obj.stackSize > 0)
      stackArray = new int[obj.stackSize];
   else
      stackArray = NULL;

   // Copy the stackSize attribute.
   stackSize = obj.stackSize;

   // Copy the stack contents.
   for (int count = 0; count < stackSize; count++)
      stackArray[count] = obj.stackArray[count];

   // Set the top of the stack.
   top = obj.top;
}

//***********************************************
// Destructor                                   *
//***********************************************
template <class T>
MyIntStack<T>::~MyIntStack()
{
   delete [] stackArray;
}

//*************************************************
// Member function push pushes the argument onto  *
// the stack.                                     *
//*************************************************
template <class T>
void MyIntStack<T>::push(T num)
{
   if (isFull())
   {
      cout << "The stack is full.\n";
   }
   else
   {
      top++;
      stackArray[top] = num;
   }
}

//****************************************************
// Member function pop pops the value at the top     *
// of the stack off, and copies it into the variable *
// passed as an argument.                            *
//****************************************************
template <class T>
T MyIntStack<T>::pop()
{
	T t;
   if (isEmpty())
   {
      cout << "The stack is empty.\n";
   }
   else
   {
      t = stackArray[top];
      top--;
   }
	return t;
}

//***************************************************
// Member function isFull returns true if the stack *
// is full, or false otherwise.                     *
//***************************************************
template <class T>
bool MyIntStack<T>::isFull() const
{
   bool status;

   if (top == stackSize - 1)
      status = true;
   else
      status = false;

   return status;
}

//****************************************************
// Member funciton isEmpty returns true if the stack *
// is empty, or false otherwise.                     *
//****************************************************
template <class T>
bool MyIntStack<T>::isEmpty() const
{
   bool status;

   if (top == -1)
      status = true;
   else 
      status = false;

   return status;
}

//****************************************************
// Member funciton size returns # of elements on	  *
// the stack 													  *
//****************************************************
template <class T>
int MyIntStack<T>::size() const
{
	return top+1;
}
