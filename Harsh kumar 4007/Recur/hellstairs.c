# include <stdio.h> //
int stairs(int n);
int main(){
    int n1;
    printf("Enter the number of stairs:");
    scanf("%d",&n1);
    if (n1<=0)
       printf("Invalid input.");
    else 
       printf("The number of ways are %d",stairs(n1));   //Function call
}

/*int stairs(int n){ //Function definition
    switch (n){
         case 1:
             return 1;                                    **For 1 and 2 steps**
         case 2:
             return 2; 
    }
    return stairs(n-1)+stairs(n-2); //Function call
}*/

int stairs(int n)
{
    switch(n)
    {
        case 1:
            return n;
        case 2:
            return n;
        case 3:
            return 4;            
    }
    return stairs(n-1)+stairs(n-2)+stairs(n-3);
}