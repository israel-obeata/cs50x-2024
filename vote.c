#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  int amount = get_int("\nHow many candidates: ");
   string names[amount];
   for(int i = 0; i < amount; i++){
        names[i] = get_string(" name: ");
        }
      for(int j=0;j<amount;j++){
        int n=0;
        for(int p=0;p<amount;p++){
          if(strcmp(names[j],names[p]) == 0){
            n++;
          }
          names[j]=n;
        }
          printf("%d",names[3]);
      }
}


