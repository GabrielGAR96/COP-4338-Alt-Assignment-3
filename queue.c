//
// Created by Gabriel Albuquerque Ribeiro on 7/14/20.
//
#include "queue.h"

int stack[1000];
int top = 0;

int stack2[1000];
int top2 = 0;

int size()
{
    return top+top2;
}

void push(int data)
{
    stack[top++] = data;
}
void push2(int data)
{
    stack2[top2++] = data;
}
int pop()
{
    return stack[--top];
}
int pop2()
{
    return stack2[--top2];
}

int peek() {
    if(top > 0)return stack[top-1];
    else if(top2 > 0)return stack2[0];

    else return 0;
}

void enqueue(int data)
{
    push(data);

}

int dequeue()
{
    if(size() == 0) return 0;
    if(top2 == 0){
        while (top > 0) {
            push2(peek());
            pop();
        }
    }
    return pop2();
}