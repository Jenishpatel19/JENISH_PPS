#include<stdio.h>
int main()
{
  int English,Maths,Science,Hindi,Gujarati;
  float per, Total;
  printf("\nEnglish Marks= ");
  scanf("%d",&English);
  printf("\nMaths Marks= ");
  scanf("%d",&Maths);
  printf("\nScience Marks= ");
  scanf("%d",&Science);
  printf("\nHindi Marks= ");
  scanf("%d",&Hindi);
  printf("\nGujarati Marks= ");
  scanf("%d",&Gujarati);
  
  Total=English+Maths+Science+Hindi+Gujarati;
  printf("\nTotal Obtained Marks Out of 500= %f",Total);

  per= Total*100/500;
  printf("\nPercentage = %f", per);
  if ( per>=90 )
  {
    printf("\nGrade = A");
  }
  else if ( per>=75 )
  {
    printf("\nGrade = B");
  }
  else if ( per>=60 )
  {
    printf("\nGrade = C");
  }
  else if ( per>=45 )
  {
    printf("\nGrade = D");
  }
  else if ( per<40 )
  {
    printf("\nFail");
  }
  
  return 0;
  
  
  


}
