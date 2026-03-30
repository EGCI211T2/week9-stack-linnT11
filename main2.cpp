#include<iostream>
using namespace std;
#include <cstring>
#include "stack.h"

int main(int argc, char **argv){
    
   

    for(int i = 1; i < argc; i++){

      Stack s;
    
    bool error = false;

    for(int j = 0; j < strlen(argv[i]); j++){
        
        char c = argv[i][j];

        switch(c){

            case '(':
            case '{':
            case '[':
                s.push(c);   // ✅ correct
                break;

            case ')':
            case '}':
            case ']': {
                char x = s.pop();
                if(x == '\0'){
                    error = true;
                    break;
                }
                if( (x == '(' && c != ')') ||
                    (x == '{' && c != '}') ||
                    (x == '[' && c != ']') ){
                    error = true;
                }
                break;
            }
        }

        if(error) break;
    }

    
    if(error){
        cout << "argv " << i << " incorrect" << endl;
    }
    else if(!s.isEmpty()){
        cout << "argv " << i << " incorrect: too many open parenthesis" << endl;
    }
    else{
        cout << "argv " << i << " correct" << endl;
    }
}

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


   
