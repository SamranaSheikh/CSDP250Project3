//Samrana Sheikh
//Oct-25-2023
//CSDP 250 Project 3
//Binary_Converter.h

#ifndef BinaryConverter_h
#define BinaryConverter_h

class Queue
{
private:
    struct QueueNode
    {
        int value;
        QueueNode* next;
    };
    QueueNode* front;
    QueueNode* rear;

public:
    Queue()
    {
        front = nullptr;
        rear = nullptr;
    }
    ~Queue() {}

    void createQueue(double);
    void enqueue(int);
    void clear();
    void displayQueue();
};

class Stack
{
private:
    struct StackNode
    {
        int value;
        StackNode* next;
    };
    StackNode* top;

public:
    Stack()
    {
        top = nullptr;
    }
    ~Stack() {}

    void createStack(int);
    void push(int);
    void clear();
    void displayStack();
};

#endif