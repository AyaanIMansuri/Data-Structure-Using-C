#include<stdio.h>
int main(){ 

    int linear_search(int[],int,int);
    int a[20],n,x,i;
    
    printf("\n how Many Number Enter in List : ");
    scanf("%d",&n);
    printf("Enter The List :");
    for(i = 0;i < n; i++)
    scanf("%d",&a[i]);
    printf("\n Enter The Number to be Search in List : ");
    scanf("%d",&x);
    linear_search(a,n,x);
    return 0;
}
     int linear_search(int b[],int m , int y)
     {   
       int i ; 
     int flag = 0;
     for(i=0;i<m;i++)
     {
        if(b[i] == y)
        {
            flag = 1;
            break;
        }
        if (flag == 0)
        printf("Search Is unsuccessful");
        
        else 
        printf("Search Is Succcessful at Location : %d",i+1);
     }
}
