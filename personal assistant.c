// 13/12/17 Andrew Fleming andrewfleming21@outlook.com
// Personal assistant main program




#ifndef PAP_H
#define PAP_H
#include "Pap.h"

#endif
#define MAXBUF 512


int main(int argc, char ** argv, char ** envp){
    char line[BUFSIZ];
    printf("Welcome to the personal assistant\n");
    printf("If you wish to exit at any time, type exit\n");
    prompt();
    while (fgets(line, BUFSIZ, stdin) != NULL){
        normalise(line);
        
        #ifdef DEBUG
        printf("LINE WAS %s\n", line);
        #endif

        removeWhiteSpace(line);
        if(strcmp(line,"exit") == 0){
            break;
        }
        if(strcmp(line,"") == 0){
            prompt();
            continue;
        }

        if(strcmp(line,"next")==0){
            createEvent("Andrew");
            prompt();
            continue;
        }



        #ifdef DEBUG
        printf("LINE WAS %s\n", line);
        #endif
        
        
        printf("Invalid command. Try again\n");
        
        prompt();
    }
    
    return 0;
}

void prompt(void){
   
    printf("Command: ");
}





