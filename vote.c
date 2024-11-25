#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void){
    string names[amount];
  int amount= get_int("\namount of voters: ");
  for(int i=0;i<amount;i++){
        names[i]=get_string("names of candidates: ");
  }
  for(int j=0;j<amount;j++){
        int n=0;
        for(int p=0;p<amount;p++){
                if(strcmp(names[j],names[p])==0){
                        
                }
        }
  }
}









