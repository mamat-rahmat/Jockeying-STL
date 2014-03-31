#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

class Queue
{
    public:
        Queue();
        Queue(int);
        Queue(const Queue& q);
        Queue& operator=(const Queue& q);
        ~Queue();
        bool isEmpty();
        bool isFull();
        void push(int);
        int pop();
        int size();
        void Print();
        bool status();
    public:
        int* T;
        int nElmt;
};

#endif // QUEUE_H
