#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void){

  int amount= get_int("\namount of voters: ");
  string names[amount];
  for(int i=0;i<amount;i++){
        names[i]=get_string("names of candidates: ");
  }
    int large = 0;
    int g=0;
  for(int j=0;j<amount;j++){
        int n=0;
        for(int p=0;p<amount;p++){
                if(strcmp(names[j],names[p])==0){
                  n++;
                  g++;
                }
             }
             if(n > large){
               large=n;
             }
  }
     if(g==large){
        printf("\n%s %d\n",names[j],large);
     }
  }











