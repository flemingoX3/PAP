//14/12/17 Andrew Fleming andrewfleming21@outlook.com
// .h file for all of the function declarations for the personal assistant stuff
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>




// NOTE TO SELF DEAL WITH UNIQUE EVENT ID FOR DATABASE INTERACTION

struct event{
    char *eventName;
    int day;
    int month;
    int year;
    int startTime;  
    int endTime;
    int priority;
    char* notes;
};



typedef struct event event_t;

void prompt(void);

void removeWhiteSpace (char line[]);

void normalise(char line[]);

event_t createEvent(char name[]);

