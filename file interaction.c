// 18/12/17 Andrew Fleming andrewfleming21@outlook.com 
// File interactions

#ifndef PAP_H
#define PAP_H
#include "Pap.h"

#endif

event_t dummy = {"dummy", 0, 0 , 0, 0, 0, 0, "NONE"};

event_t createEvent(char name[]){
    if(printf("Working directory is : %s", getcwd(NULL, 100)) == 0){
        return dummy;
    }
    return dummy;
}