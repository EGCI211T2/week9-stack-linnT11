#include<iostream>
#include<cstdlib>   
using namespace std;

#include "stack.h"

int main(int argc, char **argv){

    Stack s;

    int i;
    for(i = 1; i < argc; i++){

      
        if(strcmp(argv[i], "pop") == 0){
            s.pop();
        }
        else{
            s.push(atoi(argv[i]));
        }
    }

    return 0;
}