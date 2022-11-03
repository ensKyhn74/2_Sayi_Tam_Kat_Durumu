#include <stdio.h>
// klavyeden girilen 2 pozitif tamsayıdan büyük olan küçüğün tam katı mı değil mi?

int main() 

{
 
 int x,y;
 
 printf("1.sayiyi girin: ");    scanf("%d",&x);
 printf("2.sayiyi girin: ");    scanf("%d",&y);
 
  if((x > 0 && y > 0) &&  x > y)
  {
    if(x % y == 0)
    {
     printf("%d sayisi %d sayisinin %d katidir",x,y,x/y);
    }
      
    else
    {
     printf("%d sayisi %d sayisinin tam kati degildir",x,y);
    }
  }
    
  else if((x > 0 && y > 0) &&  y > x) 
  {
    if(y % x == 0) 
    {
     printf("%d sayisi %d sayisinin %d katidir",y,x,y/x);
    }
     
    else
    {
     printf("%d sayisi %d sayisinin tam kati degildir",y,x);
    }
  }
  
  else
  {
   printf("x<=0 ve y<=0 olamaz!");
  }
  
 return 0;

}