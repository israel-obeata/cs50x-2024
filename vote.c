#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void){
    int length=get_int("voter's length: ");
    for(int i=0;i<length;i++){
        char *name= get_string("candidate: ");
        name[i]= name;
        i++;
    }
    printf("%s",name[3]);
    }
}
