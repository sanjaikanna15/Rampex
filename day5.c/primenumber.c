 #include <stdio.h>

int main()
 {
    int isprime=1,num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num<=1)
    printf("\n ENTER THE CORRECT INPUT---");
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            isprime=0;
            break;
        }
    }
    if(isprime)
    printf("\n IT IS PRIME NUMBER ");
    else
    printf("\n IT IS NOT A PRIME NUMBER");
    return 0;
 }