#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void){

  int amount= get_int("\namount of voters: ");
  string names[amount];
  for(int i=0;i<amount;i++){
        names[i]=get_string("names of candidates: ");
  }

  for(int j=0;j<amount;j++){
        int n=0;
        int f=0;
        for(int p=0;p<amount;p++){
                if(strcmp(names[j],names[p])==0){
                  n++;
                }
             }
             if(j=0){
                  a+=n;
             }
             if(j=1){
                  b+=n;
             }
             if(a<b){
                  large +=b;
             }
             else{
                  large +=a;
             }
             
        }

        printf("\n %s %d %d\n",names[j],n,f);
  }
  }










