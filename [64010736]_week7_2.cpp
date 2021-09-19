#include "stdio.h"
#include "conio.h"
#include "string.h"

int main(){
int const n = 10;
int i,nam[n],max,min;
for(i=0; i<n; i++)
    {
             printf("Enter Namber %d :",i+1);    
			 scanf("%d",&nam[i]);
    }
max=nam[0];
min=nam[0];

for(i=0; i<n; i++)
    {
          if (nam[i]>max)
                 {
                       max=nam[i];
                 }
          if(nam[i]<min)
                 {
                      min=nam[i];
                 }
      }
    printf("\n");
	printf("Max : %d\n",max);
	printf("Min: %d\n",min);
	return 0;
}
