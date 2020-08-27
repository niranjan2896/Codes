/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[] = {2,6,8,4,66,9,7,0,3,33,44};
    int grp1[4];
    int grp2[4];
    int grp3[3];
    int i =sizeof(arr)/sizeof(arr[0]);
    int j =0;
    int g1=0; 
    int g2=0;
    int g3=0;
 
     while(j<i)
     {
        if(arr[j]<5)
            { 
                
                grp1[g1] = arr[j]; 
                g1++;  
            }
        else if(arr[j]>5 && arr[j] <10)
            { 
                
                grp2[g2] = arr[j]; 
                g2++;  
            }
        else if(arr[j] > 10)
        {
           
            grp3[g3] = arr[j]; 
            g3++;
        }
        j++;
     }
     
     int z=0;
     int g1s =sizeof(grp1)/sizeof(grp1[0]);
     
     while(z<g1s)
     {
        printf("%d",grp1[z]);
        z++;
        if(z<g1s)
            printf(",");
     }
     
     printf("|");
     int g2s =sizeof(grp2)/sizeof(grp2[0]);
     
     z=0;
      while(z<g2s)
     {
        printf("%d",grp2[z]);
        z++;
        if(z<g2s)
            printf(",");
     }
     
     printf("|");
     int g3s =sizeof(grp3)/sizeof(grp3[0]);
     
  
     z=0;
      while(z<g3s)
     {
        printf("%d",grp3[z]);
        z++;
        if(z<g3s)
            printf(",");
     }
    return 0;
   
    
}
