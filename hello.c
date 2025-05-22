#include<stdio.h>
int main()
{
    printf("How many");
    int a;
    scanf("%i", &a);
    for(int i = 0; i < a; i++){
        printf("%d\n", i);
    }
    return 0;
}
