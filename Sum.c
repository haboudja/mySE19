/* Author Name:
Program Description:
*/


#include <stdio.h>
int main(){

  int i, Num, Sum = 0, count;
  float average;
  
  printf(" Please Enter the value of the Number : \n");
  scanf("%d",&Num);
  printf(" The value of Number is : %d \n", Num);

  for(i=1;i <= Num; i++){
    Sum +=i;
  count = i;
  }
  printf(" The sum of the numbers from 1 to Num =  %d  is Sum = %d \n", Num, Sum);
  printf(" The average of the numbers is : %f \n ", Sum/count);

  return 0;
}// end of main
