#include <stdio.h>

int main()
{
    char messageletter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char ciphertextletter[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    char input[] = "PQDOT";
    int n = 5;
    int index = 0;
    int counter = 0;
    
    while (index <= n){
        for (counter = 0; counter < 25; counter ++){
            if (input[index] == ciphertextletter[counter]){
            printf("%c", messageletter[counter]);
            }
        }
        index ++;
    }
    
return 0;
}
