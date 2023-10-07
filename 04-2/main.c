//
//  main.c
//  04-2
//
//  Created by MacBook Air on 2023/10/07.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b;
    
    printf("input two integers : ");
    scanf("%i %i", &a, &b);
    
    printf("%i + %i = %i \n", a, b, a+b);
    printf("%i - %i = %i \n", a, b, a-b);
    printf("%i * %i = %i \n", a, b, a*b);
    printf("%i / %i = %i \n", a, b, a/b);
    printf("%i %% %i = %i \n", a, b, a%b);
    
    return 0;
}
