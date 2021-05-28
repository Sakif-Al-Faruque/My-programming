#include <stdio.h>

void main(){
    enum Bool{False, True};
    
    enum Bool checker;

    checker = True;
    printf("%d\n", checker);

    checker = False;
    printf("%d\n", checker);
}