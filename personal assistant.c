// 13/12/17 Andrew Fleming andrewfleming21@outlook.com

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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

void removeWhiteSpace (char* line, char newline[]){
    int i = 0; 
    int count = 0;
    int j = 0;
    int length = strlen(line);
    for(i = 0; i < length; i ++){
        if(isspace(line[i])){ 
            count++;
        }
    }
    
    printf("Count %d\n", count);
    printf("Strlen %d\n", (int)strlen(newline));
    i = 0;
    for(i = 0; i < length; i ++){
        if(isspace(line[i]) == 0){
            printf("non space %c\n", line[i]);
            newline[j] = line[i];
            j++;
        }


    }
    newline[j] = '\0';
    
}

void trim(char *str)
{
   int first, last;
   first = 0;
   while (isspace(str[first])) first++;
   last  = strlen(str)-1;
   while (isspace(str[last])) last--;
   int i, j = 0;
   for (i = first; i <= last; i++) str[j++] = str[i];
   str[j] = '\0';
}

int main(int argc, char ** argv, char ** envp){
    char line[BUFSIZ];
    char newline[] = "";
    printf("Welcome to the personal assistant\n");
    printf("If you wish to exit at any time, type exit\n");
    prompt();
    while (fgets(line, BUFSIZ, stdin) != NULL){
        //trim(line);
        removeWhiteSpace(line, newline);
        if(strcmp(newline,"exit") == 0){
            break;
        }
        printf("LINE WAS %s\n", newline);
        prompt();
    }
    
    return 0;
}