#include<stdio.h>
int main(){
int i, j, x = 0;
for (i = 0; i < 5; ++i)
for (j = 0; j < i; ++j){
    x += (i + j - i);
    printf("%d",x);
    break;
}
printf("%d", x);
}
