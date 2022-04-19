#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter the three no:");
    scanf("%d%d%d", &a, &b,&c);
    if ((a>b&&a<c)||(a<b&&a>c))
    {
        printf("%d is the second highest no.", a);
    }
    
  else if ((b>a&&b<c)||(b<a&&b>c))
  {
      printf("%d is the second highest no.", b);

  }
  else if ((c>a&&c<b)||(c<a&&c>b))
  {
      printf("%d is the second highest no.", c);
  }
   if(a==b&&b==c)
  {
      printf("all are equal \n jai shri ram");
     printf("\n jai shri ram ");
  }
  else  if (a==b&&b!=c)
  {
     printf("%d = %d are equal\n",a,b);
  }
   else if (a==c&&c!=b)
  {
     printf("%d = %d are equal\n",a,c);

  }
  
  else  if (b==c&&c!=a)
  {
      printf("%d = %d are equal\n",b,c);
  }
  
  
  
  
   return 0;
}
