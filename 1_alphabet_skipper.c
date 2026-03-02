

#include <stdio.h>


int main(){

    char num = 'a';

    do
    {
       printf("%c ",num);

       num = num + 4;
    } while (num <= 'z' );
    
    return 0;
}