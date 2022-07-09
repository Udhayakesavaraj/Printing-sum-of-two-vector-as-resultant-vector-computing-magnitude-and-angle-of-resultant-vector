#include<stdio.h>
#include<math.h>
int main() {
 int a[10], b[10];    //using integer datatye 
 int c[10],d[10];
 int n, i,e1=0;
 float magnitude,angle,a1,b1,c1;  //using float datatype
 printf("Enter elements of vector a:\n");  
 for(i = 0; i < 2; i++)
   scanf("%d", &a[i]);  // enter the element values of a vector here
   printf("Enter elements of vector b:\n");
   for(i = 0; i < 2; i++)
    scanf("%d", &b[i]);   // enter the element values of b vector here
    for (i = 0; i < 2; i++)
      c[i] = a[i] + b[i];
    printf("Addition vector:"); //print Addition vector value
    for (i = 0; i < 2; i++)
      printf("%d ", c[i]);
      magnitude=sqrt(pow(c[0],2)+pow(c[1],2));  //magnitude formula
      printf("\nMagnitude of c vector is %f\n",magnitude); //print magnitude value
      for(i=0;i<2;i++)
      {
          d[i]=a[i]*b[i];
          e1=e1+d[i];
      }
     
      a1=sqrt(pow(a[0],2)+pow(a[1],2));        
       printf("%f\n",a1);
      b1=sqrt(pow(b[0],2)+pow(b[1],2));        
       printf("%f\n",b1);
      c1=a1*b1;  
       angle=e1/c1;
       printf("angle between the vector is cos θ = %f",angle);  //print angle answer
     
   
}

