#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  if(a%5==0&&a%11==0)
  {
    printf("hiihello");
  }
  else if(a%5==0){
    printf("hello");}
  else if(a%11==0){
    printf("hii");
  }
  return 0;
}

