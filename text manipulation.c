// 18/12/17 Andrew Fleming andrewfleming21@outlook.com
//Text manipulation




#ifndef PAP_H
#define PAP_H

#include "Pap.h"

#endif

void removeWhiteSpace (char line[]){
    int i = 0; 
    
    int j = 0;
    int length = strlen(line);
    char newLine[BUFSIZ]; 
    #ifdef DEBUG 
    int count = 0;
    for(i = 0; i < length; i ++){ // counts the number of spaces
        if(isspace(line[i])){ 
            count++;
        }
    }
       
    printf("Count %d\n", count);
    printf("Strlen %d\n", (int)strlen(line));
    #endif
    i = 0;
    for(i = 0; i < length; i ++){   //loops through the word
        if(isspace(line[i]) == 0){  //if the char is not a space add it to the new string
            #ifdef DEBUG            
            printf("non space %c\n", line[i]);
            #endif            
            newLine[j] = line[i];
            j++;
        }
    }
    newLine[j] = '\0'; // all a null character at the end
    #ifdef DEBUG    
    printf("newLine %s Strlen  %d\n", newLine, (int)strlen(newLine));
    for (int loop = 0; loop < strlen(newLine); loop++){
        printf("char %d\n", newLine[loop]);
    }
    #endif    
    
    line = strncpy(line, newLine,strlen(line)); // pusht the 2nd string onto the original one
    
    #ifdef DEBUG 
    printf("line %s Strlen  %d\n", line, (int)strlen(line));
    for (int loop2 = 0; loop2 < strlen(line); loop2++){
        printf("char %d\n", line[loop2]);
    }
    printf("line %s\n", line);
    #endif    
    
}

void normalise(char line[]){ 
    int len = strlen(line);
    for(int i = 0; i < len; i++){       //loops through the whole word
        if(isalpha(line[i])){           //if the char is a letter 
            line[i]= tolower(line[i]);  //make it lowercase
        }
    }

    
}