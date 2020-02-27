#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
  int num,check=1;                                    //定义阶数和检查点
  int m=0,k=0;                                        //定义列行
  scanf("%d",&num);
  double a[num][num],temp = 0,value=1;
  for(int i1=0;i1<=num-1;i1++)
  {
    for(int i2=0;i2<=num-1;i2++)
    {
      scanf("%lf",&a[i1][i2]);
    }
  }  
  for(m=0;m<=num-1;m++)
  {
    for(k=check;k<=num-1;k++)
    {
      if(a[k][m]!=0)
      {
        temp = -1*a[k][m]/a[m][m];
        for(int i=m;i<=num-1;i++)
        {
          a[k][i]= (double)(a[k][i] + a[m][i]*temp);
        }
      }
    }
    check++;
  }
  for(int i1=0;i1<=num-1;i1++)
  {
    for(int i2=0;i2<=num-1;i2++)
    {
      printf("%4.2lf  ",a[i1][i2]);
      if(i2/(num-1)==1)printf("\n");
    }
    value *=a[i1][i1];
  }  
  printf("%4.2lf",value);
  return 0;
} 
