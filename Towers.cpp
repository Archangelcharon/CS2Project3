#include <iostream>
#include "Towers.h"
#include "MyIntStack.h"

using namespace std;

//Zach Oryszak-Ley
//zao1@zips.uakron.edu

//display disks on the three pegs in the console window (stdout)
template <class B>
void Towers<B>::plotPegs() const
{
	if (peg1!=NULL && peg2 !=NULL && peg3 != NULL) {
		int n1=peg1->size();
		int n2=peg2->size();
		int n3=peg3->size();
		int numDisk = n1+n2+n3;
	
		MyIntStack<B> tmp1(*peg1);
		MyIntStack<B> tmp2(*peg2);	
		MyIntStack<B> tmp3(*peg3);
		
		//plot
		for (int i=0; i<numDisk; i++) {
			//peg1
			if (numDisk-n1-i>0) {
				for (int j=0; j<numDisk; j++)
					cout << " ";
			}
			else {
				int m1 = tmp1.pop();
				for (int j=0; j<m1; j++)
					cout << "*";
				for (int j=m1; j<numDisk; j++)
					cout << " ";
			}
			cout <<" | ";
		
			//peg2
			if (numDisk-n2-i>0) {
				for (int j=0; j<numDisk; j++)
					cout << " ";
			}
			else {
				int m2 = tmp2.pop();
				for (int j=0; j<m2; j++)
					cout << "*";
				for (int j=m2; j<numDisk; j++)
					cout << " ";
			}
			cout <<" | ";
		
			//peg3
			if (numDisk-n3-i>0) {
				for (int j=0; j<numDisk; j++)
					cout << " ";
			}
			else {
				int m3 = tmp3.pop();
				for (int j=0; j<m3; j++)
					cout << "*";
				for (int j=m3; j<numDisk; j++)
					cout << " ";
			}
			cout<<endl;
		}
	}
	cout << "_________________________________________\n";
}

template <class B>
void Towers<B>::movestck(int size, MyIntStack<B> *source,
                  MyIntStack<B> *temp, MyIntStack<B> *dest) 
{
    
    if(size == 1)
    {
        plotPegs();
        dest->push(source->pop());   
    }
    else
    {
        movestck(size-1,source,dest,temp); 
        plotPegs();
        dest->push(source->pop());
        movestck(size-1,temp,source,dest);
    }
}
