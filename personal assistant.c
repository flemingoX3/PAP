// 13/12/17 Andrew Fleming andrewfleming21@outlook.com

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXBUF 512

struct event{
    int eventID;
    char *eventName;
    int day;
    int month;
    int year;
    int startTime;  
    int endTime;
    int priority;
    char* notes;
};

void prompt(void){
    printf("Command: ");
}

void removeWhiteSpace (char line[]){
    int i = 0; 
    int count = 0;
    int j = 0;
    int length = strlen(line);
    char newLine[BUFSIZ]; 
    for(i = 0; i < length; i ++){
        if(isspace(line[i])){ 
            count++;
        }
    }
    
    printf("Count %d\n", count);
    printf("Strlen %d\n", (int)strlen(line));
    i = 0;
    for(i = 0; i < length; i ++){
        if(isspace(line[i]) == 0){
            printf("non space %c\n", line[i]);
            newLine[j] = line[i];
            j++;
        }


    }
    newLine[j] = '\0';
    printf("newLine %s Strlen  %d\n", newLine, (int)strlen(newLine));
    for (int loop = 0; loop < strlen(newLine); loop++){
        printf("char %d\n", newLine[loop]);
    }
    line = strncpy(line, newLine,strlen(line));
    for (int loop2 = 0; loop2 < strlen(line); loop2++){
        printf("\nchar %d", line[loop2]);
    }
    printf("line %s\n", line);
    
    
}



int main(int argc, char ** argv, char ** envp){
    char line[BUFSIZ];
    printf("BUFSIZ %d\n", BUFSIZ);
    printf("Welcome to the personal assistant\n");
    printf("If you wish to exit at any time, type exit\n");
    prompt();
    while (fgets(line, BUFSIZ, stdin) != NULL){
        //trim(line);
        removeWhiteSpace(line);
        if(strcmp(line,"exit") == 0){
            break;
        }
        printf("LINE WAS %s\n", line);
        prompt();
    }
    
    return 0;
}