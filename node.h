//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa
//

#ifndef NODE_H
#define NODE_H

class NODE {
    char data;
    NODE* nextPtr;

public:
    NODE(char x) {
        data = x;
        nextPtr = NULL;
    }
    void set_next(NODE* t) {
        nextPtr = t;
    }
    NODE* get_next() {
        return nextPtr;
    }

    char get_value() {
        return data;
    }

    ~NODE() {
        
    }
};

typedef NODE* NodePtr;

#endif