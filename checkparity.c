#include<stdio.h>

void main()
{
   int  n,num, flag,count=0;
   printf("enter the number you need to check : ");
   scanf("%x",&num);
   n=num;
   while(num){
      if( (num & 1) == 1){
	 count++;
      }
      num=num>>1;
   }
   
   if(count%2==0){
      printf("the number %d is even parity",n);
   }
   else{
      printf("this  number %d is odd parity",n);
   }
}

