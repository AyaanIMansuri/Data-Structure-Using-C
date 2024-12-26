// Write A program to implement push And Pop Operation of stack .
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

    int top =-1,s[5];
    int push(int item);
    int pop();
    int display();

        int main()
    {
            int item,ch;
            A:
            switch (ch)
        {
            case 1:
            printf("\n Enter Element");
            scanf("%d",&item);
            push(item);
            goto A;
                break;
                
            case 2:
            {
                pop ();
                goto A;
                break;
            } 

            case 3:
            {
                display();
                goto A;
                break;
            }
            case 4:
            {
                printf("\n EXIT");
                exit(0);
            }
            default:
                {
                    printf("Enter The Valid Choise:");
                    goto A;
                }
            
        }
        return 0;
    }
    int push(int item)
    {
        if(top >= 4)
        {
            printf("\n\t Stack Overflow");
            display();
        }
        top ++;
        s[top]=item;
    }
        int pop()
        {
            if(top == -1)
            {
                printf("\n Stack UnderFlow\n");
                display();
                exit(0);
            }
            printf("\n Poped Element is %d",s[top]);
            top--;
        }
        int display()
        {
            int i;
            for(i = top;i >=0;i--)
            {
                printf("\t\t Stack[%d] = %d\n",i,s[i]);
            }
        }