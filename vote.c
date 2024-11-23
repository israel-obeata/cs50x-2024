#include <cs50.h>
#include <stdio.h>

int main(void){
    int length=get_int("voter's length: ");
    for(int i=0;i<length;i++){
        string name= get_string("candidate: ");
        name[i]= name;
        i++;
    }
    while(strcmp(name[i],name[length]) != True)
}
