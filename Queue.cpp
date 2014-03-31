#include "Queue.h"

Queue::Queue(){
    T       =    new int[99];
    nElmt   =   0;
}
Queue::Queue(int _N){
    T       =   new int[_N];
    nElmt   =   0;
}
Queue::Queue(const Queue& q){
    T       =    new int[q.nElmt];
    nElmt   =    q.nElmt;
    for(int i=0; i<nElmt; i++){
        T[i] = q.T[i];
    }
}
Queue& Queue::operator=(const Queue& q){
    if(T != NULL){
        delete T;
    }
    for(int i=0; i<nElmt; i++){
        T[i]    =   q.T[i];
    }
    return *this;
}
Queue::~Queue(){
}
bool Queue::isEmpty(){
    return (nElmt==0);
}
bool Queue::isFull(){
    return nElmt==99;
}
void Queue::push(int input){
    if(!isFull()){
        T[nElmt]    =   input;
        nElmt++;
    }
}
int Queue::pop(){
    return T[1];
    nElmt--;
	Queue Qtemp(nElmt);
}
int Queue::size(){
    return nElmt;
}
bool Queue::status(){
    return isEmpty();
}
void Queue::Print(){
    cout << "[";
    for(int i=0;i<nElmt;i++){
        cout << T[i];
        if((i+1) < nElmt){
            cout << ",";
        }
    }
    cout << "]" << endl;
}

