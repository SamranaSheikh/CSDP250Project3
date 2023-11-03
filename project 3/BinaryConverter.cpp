//Samrana Sheikh
//Oct-25-2023
//CSDP 250 Project 3
//Binary_Converter.cpp

#include "BinaryConverter.h"
#include <iostream>
using namespace std;

void Stack::createStack(int num)
{
    do
    {
        int remainder = num % 2;
        push(remainder);
        num /= 2;
    } while (num != 0);
}

void Queue::createQueue(double num)
{
    int places;
    cout << "How many places do you want the decimals? ";
    cin >> places;

    for (int i = 0; i < places; i++)
    {
        num *= 2;
        if (num >= 1)
        {
            enqueue(1);
            num--;
        }
        else
        {
            enqueue(0);
        }
    }
}

void Stack::push(int num)
{
    StackNode* newNode = new StackNode;

    newNode->value = num;

    if (!top)
        top = newNode;

    else
    {
        newNode->next = top;
        top = newNode;
    }
}

void Stack::clear()
{
    while (top)
    {
        StackNode* newNode = top;

        top = top->next;

        delete newNode;
    }
}

void Stack::displayStack()
{
    StackNode* nodePtr = top;

    while (nodePtr)
    {
        cout << nodePtr->value;
        nodePtr = nodePtr->next;
    }
}

void Queue::enqueue(int num)
{
    QueueNode* newNode = new QueueNode;

    newNode->value = num;

    if (!front)
    {
        front = newNode;
        rear = newNode;
    }

    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

void Queue::clear()
{
    while (front)
    {
        QueueNode* newNode = front;

        front = front->next;

        delete newNode;
    }
}

void Queue::displayQueue()
{
    QueueNode* nodePtr = front;

    while (nodePtr)
    {
        cout << nodePtr->value;
        nodePtr = nodePtr->next;
    }
}