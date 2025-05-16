include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    int user;
    scanf("%d",&user);
    switch(user){
        case 1:
            printf("Add:%d",num1+num2);
            break;
        case 2:
            printf("Sub%d:",num1-num2);
            break;
        case 3:
            printf("Multi:%d",num1*num2);
            break;
        case 5:
            printf("Div:%d",num1/num2);
            break;
        case 6:
            printf("modul:%d",num1%num2);
            break;
    }