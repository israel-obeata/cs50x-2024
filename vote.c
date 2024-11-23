#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int amount = get_int("How many candidates: ");
   string names[amount];
   for(int i = 0; i < amount; i++){
        names[i] = get_string(" name: ");
        }
        printf("%s", names[2]);
}


