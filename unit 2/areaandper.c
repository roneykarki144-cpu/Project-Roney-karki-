#include<Stdio.h>
int main(){
    int l,b,area,per;
    printf("Enter length and breadth:");
    scanf("%d%d",&l,&b);
    area = l*b;
    per = 2*(l+b);
    printf("The value of area is %d and perimeter is %d ",area,per);
    return 0;
}