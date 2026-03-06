#include<iostream>
using namespace std;

#include "stack.h"

int main(int argc, char **argv){
    Stack s;
   

    for(int i = 1; i < argc; i++){
        for(int j = 0; j < strlen(argv[i]); j++){
          switch(argv[i][j]){
            case '(':
              s.push("(");
              break;
            case ')':
             s.pop();
             break;
            case 

          }
/*
  Exercise 2
 printf("Checking the parentheses in argv arguments\n");

   */

    /*
     for(j=0;j<strlen(argv[i]);j++){
       // Use stack to help with the parentheses





  }

  */


   return 0;
}
