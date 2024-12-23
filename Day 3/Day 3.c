#include<stdio.h>
int main(){
    int a[5],i;
    printf("Enter The Array Element:\n");
    for(i = 0;i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n printing the Data :\n");
    for(i = 0; i < 5; i ++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
return 0;
}