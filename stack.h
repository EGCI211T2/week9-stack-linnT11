



#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

#include "node.h"

class Stack {
    NodePtr top;
    int size;

public:
    Stack() {
        top = NULL;
        size = 0;
    }

    void push(char x) {
        NodePtr new_node = new NODE(x);
        new_node->set_next(top);
        top = new_node;
        size++;
    }

    char pop() {
        if (top == NULL) return '\0';

        NodePtr t = top;
        char value = t->get_value();

        top = top->get_next();
        size--;

        delete t;

        
        return value;
    }

    bool isEmpty() {
        return top == NULL;
    }

    ~Stack() {
        while (top != NULL)
            pop();
    }
};

#endif