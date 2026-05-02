#include <stdio.h>

int main(){
    int one,two,three,four;
    one = 1;
    two = 2;
    three = 3;
    four = one + three;

    //? Very odd that in C you have to do something like this for printing a variable 
    printf("%d", four);

    return 0;
}