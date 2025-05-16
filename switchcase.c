#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    switch(num)
    {
        case 1:
            printf("sunday");
          break;
        case 2:
            printf("monday");
          break;  
        case 3:
            printf("thurseday");
          break;  
        case 4:
            printf("wednesday");
          break;  
        case 5:
            printf("thesday");
          break;  
        case 6:
            printf("friday");
          break;
        case 7:
            printf ("saturday");
          break;
        default:
             printf("week");
    }
    return 0;
}

