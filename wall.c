#include<stdio.h>
#include<cs50.h>

void print(int Height );

int main(void){
    int h = get_int("\nHeight: ");
    print(h);
}





void print(int Height ){
    for(int i=0;i<=Height;i++){
        printf("#\n");
    }
}
