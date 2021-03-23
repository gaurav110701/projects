#include<stdio.h>
#include<conio.h>
#include<math.h>
void Toh(int,char,char,char);
int isprime(int n)
{
    int i,p = (int)sqrt(n);
    for(i=2;i<=p;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{

 /* int e;
  printf("enter the number of disk:");
  scanf("%d",&e);
  Toh(e,'A','B','C');
  */
  int n;
  if(isprime(5))
    printf("the number is prime");
  else
    printf("The number is not prime");
  return 0;
  }
  void Toh (int n,char Beg,char Aux,char End)
  {
      if(n>=1){
        Toh(n-1,Beg,End,Aux);
        printf("%d disk move to %c to %c\n",n,Beg,End);
        Toh(n-1,Aux,Beg,End);
      }

  }
