#ifndef 	TOWER_H 
#define	TOWER_H

#include "MyIntStack.h"
template <class B>
class Towers {
	private:
		MyIntStack<B> *peg1; //start
		MyIntStack<B> *peg2; //tmp
		MyIntStack<B> *peg3; //destination
		
	public:
		Towers(int numDisk0) {
            //initialaztion part
            peg1=new MyIntStack<B>(numDisk0);
            peg2=new MyIntStack<B>(numDisk0);
            peg3=new MyIntStack<B>(numDisk0);
            for(int i=0;i<numDisk0;i++){
                peg1->push(numDisk0-i);
            }
		}
		~Towers() {
            //delete the created stuff
			delete peg1;
            delete peg2;
            delete peg3;
		}  
        //starts the game
        void start() {
            movestck(peg1->size(),peg1,peg2,peg3); 
            plotPegs();
        }
		
	private:
		void plotPegs() const; 
        //moves the "disks" from source to destination
        void movestck(int,MyIntStack<B> *,MyIntStack<B> *,
                      MyIntStack<B> *);
};

#endif
