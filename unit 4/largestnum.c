#include <stdio.h>

int main() {
int n1,n2,n3;
printf("Enter any 3 numbers:");
scanf("%d%d%d",&n1,&n2,&n3);
if(n1>n2 && n1>n3){
    printf("%d is the largest num",n1);
}
else if(n2>n1 && n2>n3){
    printf("%d is largest num",n2);
}
else {
    printf("%d is largest num",n3);
}
    return 0;
}